CC = g++

all: hw04

hw04: date.o employee.o programmer.o architech.o timeClass.o hw04.cpp hw04.h
	$(CC) hw04.cpp -o hw04 date.o employee.o programmer.o architech.o timeClass.o

date.o: date.cpp hw04.h
	$(CC) -c date.cpp -o date.o

employee.o: employee.cpp hw04.h
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
	tar cf hw04.tar hw04.scr Makefile hw04.cpp hw04.h programmer.h architech.h timeClass.h date.cpp employee.cpp programmer.cpp architech.cpp timeClass.cpp 
