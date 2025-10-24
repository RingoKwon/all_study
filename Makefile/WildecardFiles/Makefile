# Varibles
DEBUG = 1
EXECUTABLE_NAME = main

CXX = g++
CXX_STANDARD = c++17
CXX_WARNINGS = -Wall -Wextra -Wpedantic 
CXXFLAGS = $(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS = 

ifeq ($(DEBUG), 1)
CXXFLAGS += -g -O0
else
CXXFLAGS += -O3
endif

CXX_COMFILER_CALL = $(CXX) $(CXXFLAGS)

CXX_SOURCE = $(wildcard *.cc)
CXX_OBJECT = $(patsubst %.cc, %.o, $(CXX_SOURCE))
# TARGETS
build: $(CXX_OBJECT) 
# # 	g++ main.cc -c -o main.o 
# 	g++ my_lib.cc -c -o my_lib.o
# 	echo $(CXX_OBJECT)
	$(CXX_COMFILER_CALL) $(CXX_OBJECT) $(LDFLAGS) -o $(EXECUTABLE_NAME)
main.o:
	$(CXX_COMFILER_CALL) main.cc -c  
my_lib.o:
	$(CXX_COMFILER_CALL) my_lib.cc -c  
execute:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o
	rm -f $(EXECUTABLE_NAME)

%.o: %.cc
	$(CXX_COMFILER_CALL) -c $< -o $@

# [PATTERNS]
# $@: the file name of the target
# $<: the name of the first prerequisite
# $^: the names of all prerequisites