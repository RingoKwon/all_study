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

COMFILER_CALL = $(CXX) $(CXXFLAGS)
# TARGETS
build: main.o my_lib.o
# # 	g++ main.cc -c -o main.o 
# 	g++ my_lib.cc -c -o my_lib.o
# 	echo $(COMFILER_CALL)
	$(COMFILER_CALL) main.o my_lib.o $(LDFLAGS) -o $(EXECUTABLE_NAME)
main.o:
	$(COMFILER_CALL) main.cc -c  
my_lib.o:
	$(COMFILER_CALL) my_lib.cc -c  
execute:
	./main

clean:
	rm -f main
	rm -f *.o