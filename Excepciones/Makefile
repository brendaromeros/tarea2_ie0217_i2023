#/**
# * @file Makefile
# * @brief Archivo Makefile para compilar los archivos.
# *
# * Este archivo Makefile utiliza las reglas de compilación estándar para compilar
# * los archivos necesarios para utilizar la clase MiException.
# */
all: main

main: exceptions.o main.o
	g++ exceptions.o main.o -o main.exe
	./main.exe
	del /q *.o main.exe

sort.o: exceptions.cpp
	g++ -c sort.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	del /q *.o main.exe