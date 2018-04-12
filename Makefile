CPPFLAGS = -O2
if ${DEBUG}=y  
	CPPFLAGS += -g -O0else
	CPPFLAGS += -O2endif

all: main.o klasy.o
	g++ main.o klasy.o -o all

main.o: main.cpp
	g++ -c main.cpp

klasy.o: klasy.cpp klasy.h
	g++ -c klasy.cpp

clean:
	rm *.o all