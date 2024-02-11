CC = gcc
CXX = g++
CFLAGS = -Wall
CXXFLAGS = -Wall

SRC_C = $(wildcard *.c)
SRC_CPP = $(wildcard *.cpp)
TARGETS_C = $(SRC_C:.c=)
TARGETS_CPP = $(SRC_CPP:.cpp=)

.PHONY: all clean

all:$(TARGETS_C) $(TARGETS_CPP)


%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	
clean:
	rm -f $(TARGETS_C) $(TARGETS_CPP)
