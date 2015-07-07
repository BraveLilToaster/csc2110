CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
SOURCES=testProgclockClass.cpp newClockImp.cpp newClock.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


