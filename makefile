#CC=clang++
CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Roxylang.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=Roxylang.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	rm ./*.o

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

