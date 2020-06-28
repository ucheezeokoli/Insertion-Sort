CC = g++

all:
	$(CC) -std=c++11 -o a.exe insertionSort.cpp

clean:
	rm -f a.exe

