# Varibles

CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17
LDFLAGS = -lmath

COMFILER_CALL = $(CXX) $(CXXFLAGS)
# TARGETS
build: main.o my_lib.o
# # 	g++ main.cc -c -o main.o 
# 	g++ my_lib.cc -c -o my_lib.o
# 	echo $(COMFILER_CALL)
	$(COMFILER_CALL) main.o my_lib.o -o main
main.o:
	$(COMFILER_CALL) main.cc -c  
my_lib.o:
	$(COMFILER_CALL) my_lib.cc -c  
execute:
	./main

clean:
	rm -f main
	rm -f *.o