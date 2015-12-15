CXX = c++

CXXFLAGS = -std=c++11 -O0 -g -pedantic -Wall -Wextra

LIBS = 

OBJS = main.o

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)	
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

clean:
	rm -f $(OBJS) $(TARGET)
