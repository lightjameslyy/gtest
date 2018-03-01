.PHONY: all clean install

RM = rm -rf
CXX = g++

# Extra flags to give to the C compiler.
CFLAGS =

# Extra flags to give to the C++ compiler.
CXXFLAGS = -O3 -std=c++11

# rules for searching header files
INC = -I/usr/local/gtest/include

# Extra flags to give to compilers when they are supposed to invoke the linker, ‘ld’, such as -L. Libraries (-lfoo) should be added to the LDLIBS variable instead.
LDFLAGS = -L/usr/local/gtest/lib

# Library flags or names given to compilers when they are supposed to invoke the linker, ‘ld’. Non-library linker flags, such as -L, should go in the LDFLAGS variable.
LDLIBS = -lgtest

# executable binary file name
# there must be a file named $(TARGET).cpp
# by default, target is main
# TARGET = main

# source file list
# SRCS = test-all.cpp
SRCS = $(wildcard *.cpp)

# HEADERS = $(wildcard *.h)

# objects compiled from sources
# OBJS = test-all.o
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

TARGET = test-all.bin

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)
	$(RM) $(OBJS)

# $(OBJS): $(SRCS) $(HEADERS)
#       $(CXX) $(CXXFLAGS) $(INC) -c $(SRCS) -o $@

clean:
	$(RM) $(OBJS) $(TARGET)

install:

