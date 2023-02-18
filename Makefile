CC = g++

all: hw04

hw04: date.o employee.o programmer.o architech.o timeClass.o hw04.cpp
	$(CC) hw04.cpp -o hw04 date.o employee.o programmer.o architech.o timeClass.o

date.o: date.cpp date.h
	$(CC) -c date.cpp -o date.o

employee.o: employee.cpp employee.h
	$(CC) -c employee.cpp -o employee.o

programmer.o: programmer.cpp programmer.h
	$(CC) -c programmer.cpp -o programmer.o

architech.o: architech.cpp architech.h
	$(CC) -c architech.cpp -o architech.o

timeClass.o: timeClass.cpp timeClass.h
	$(CC) -c timeClass.cpp -o timeClass.o

clean: 
	rm hw04 *.o

tar:
	tar cf hw04.tar hw04.scr Makefile hw04.cpp employee.h date.h programmer.h architech.h timeClass.h date.cpp employee.cpp programmer.cpp architech.cpp timeClass.cpp 
