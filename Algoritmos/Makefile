#/**
# * @file Makefile
# * @brief Archivo Makefile para compilar los archivos.
# *
# * Este archivo Makefile utiliza las reglas de compilación estándar para compilar
# * los archivos necesarios para revisar el funcionamiento de los algoritmos implementados.
# */
all: main

main: sort.o main.o
	g++ sort.o main.o -o main.exe
	./main.exe
	del /q *.o main.exe

sort.o: sort.cpp
	g++ -c sort.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	del /q *.o main.exe
