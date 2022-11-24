# The name of the target program
TARGET  = change-main

# Select Compiler and flags
CC=g++
CFLAGS=-std=c++17 -pedantic -Wall   # Compiler options (C++17, and warn all)


SRC = $(wildcard *.cc)
OBJ = $(SRC:.cc=.o)

# Special include directories
INCLUDE = -I.

# Special libraries (none for now)
LIB =

$(TARGET): change-case-main.o change-case.o
	$(CC) -o $@ $^ $(LIB)

change-case-main.o: change-case-main.cc
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

change-case.o: change-case.cc change-case.h
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

.PHONY: clean
clean:
	rm -f $(OBJ) $(TARGET)
	rm -f *~
