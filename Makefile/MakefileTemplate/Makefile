# Varibles
DEBUG = 1
ENABLE_WARNINGS = 1
WARNINGS_AS_ERROR = 0

INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

ifeq ($(ENABLE_WARNINGS), 1)
CXX_WARNINGS = -Wall -Wextra -Wpedantic 
else
CXX_WARNINGS = 
endif
ifeq ($(WARNINGS_AS_ERROR), 1)
CXX_WARNINGS += -Werror
endif

CXX = g++
CXX_STANDARD = c++17
CXXFLAGS = $(CXX_WARNINGS) -std=$(CXX_STANDARD)
CPPFLAGS = -I $(INCLUDE_DIR)
LDFLAGS = 

ifeq ($(DEBUG), 1)
CXXFLAGS += -g -O0
EXECUTABLE_NAME = mainDebug
else
CXXFLAGS += -O3
EXECUTABLE_NAME = mainRelease
endif

CXX_COMFILER_CALL = $(CXX) $(CXXFLAGS) $(CPPFLAGS)


CXX_SOURCE = $(wildcard $(SOURCE_DIR)/*.cc)
CXX_OBJECT = $(patsubst $(SOURCE_DIR)/%.cc, $(BUILD_DIR)/%.o, $(CXX_SOURCE))
# TARGETS


build: create   $(CXX_OBJECT) 
# # 	g++ main.cc -c -o main.o 
# 	g++ my_lib.cc -c -o my_lib.o
# 	echo $(CXX_OBJECT)
	$(CXX_COMFILER_CALL) $(CXX_OBJECT) $(LDFLAGS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)
create: 
	mkdir -p $(BUILD_DIR)

execute:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/*.o
	rm -f $(BUILD_DIR)/$(EXECUTABLE_NAME)
	rm -r $(BUILD_DIR)


# [PATTERNS]
# $@: the file name of the target
# $<: the name of the first prerequisite
# $^: the names of all prerequisites
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cc
	$(CXX_COMFILER_CALL) -c $< -o $@

# [PHONY]
.PHONY build create execute clean 

