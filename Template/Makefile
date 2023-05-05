#/**
# * @file Makefile
# * @brief Archivo Makefile para compilar los archivos.
# *
# * Este archivo Makefile utiliza las reglas de compilación estándar para compilar
# * los archivos necesarios para utilizar la clase MiException.
# */
all: main

main: stackTemplate.o
	g++ stackTemplate.o -o main.exe
	./main.exe
	del /q *.o main.exe

stackTemplate.o: stackTemplate.cpp
	g++ -c stackTemplate.cpp

clean:
	del /q *.o main.exe