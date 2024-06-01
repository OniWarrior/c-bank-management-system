# Define compiler
CXX=g++
# Define compiler flags
CXXFLAGS=-std=c++11 -Wall -pthread

# Define linker flags
LDFLAGS=-lrt -pthread

# Define output program name
TARGET=bank_management_app

# Define target
all: $(TARGET)

# Rule for building target
$(TARGET): main.o
	$(CXX)  $(CXXFLAGS)  main.o  -o  $(TARGET)  $(LDFLAGS)

# Rule for compiling the source file
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean
clean:
	rm -f $(TARGET) *.o

# Phony targets
.PHONY: all clean