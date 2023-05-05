# TEMPLATE 

Este es un código en C++ que implementa una estructura de datos de pila genérica utilizando la clase Stack. La pila es una estructura de datos que funciona con el principio de LIFO (último en entrar, primero en salir), es decir, el último elemento que se agregó a la pila es el primero en salir.

El código tiene una clase Stack que permite el almacenamiento y recuperación de elementos en una pila. La clase Stack utiliza un vector que almacena los elementos de la pila.

Además, el código tiene una función principal main que utiliza el template Stack con varios tipos de datos. En esta implementación se hacen dos Stack diferentes, uno de ellos es de valores con los cuales solo se muestran al usuario, por medio de las funciones foreach y pop, mientras que el segundo es un Stack de caracteres que de igual forma se muestran al usuario. La función foreach aplica una función a cada elemento del vector.

Se incluye una carpeta con la documentación utilizando doxygen, el cual genera documentación para el proyecto. Además, se provee un archivo Makefile para compilar el programa de manera sencilla.

# Instalación
Para instalar correctamente este proyecto, debe descargar el contenido de esta carpeta y guardarlo en un mismo directorio. Después, puede utilizar una herramienta como GCC para el lenguaje de programación C++.

# Uso
Para ejecutar el programa, puede escribir el comando "make" en la terminal, siempre y cuando ésta tenga instalado el mismo con anterioridad; de lo contrario, deberá correr las instrucciones:
```
g++ .\exceptions.cpp .\main.cpp -o main.exe
.\main.exe
```
si desea ejecutar la versión por defecto del programa. De lo contrario, el usuario debe editar la función "main" del archivo "stackTemplate.cpp", donde si desea agregar otra instancia, debe hacerlo de la siguiente manera: 
```
Stack<tipoDeDato> nombre;
```
para después utilizar solo llamar los métodos de la clase procurando pasar correctamente los parámetros requeridos; cabe mencionar que para utilizar la función ***"foreach()"*** se debe de pasar una función que  tenga como parámetro una referencia del mismo tipo de dato que el stack al que le vamos a aplicar la función ***"foreach()"***

# Análisis de los include del código
Todos los "include" que se incluyen en el código son necesarios ya que se utilizan para proporcionar funcionalidades específicas que se utilizan en diferentes partes del código.

El primer "include <iostream>", es necesario para proporcionar la funcionalidad de entrada y salida estándar que se utiliza en la función principal del programa.

El segundo "include <vector>", es necesario para implementar el almacenamiento subyacente para la pila. La clase "vector" proporciona un arreglo dinámico que se utiliza para almacenar los elementos de la pila.

El tercer "include <algorithm>", es necesario para proporcionar la función "std::for_each()" que se utiliza en el método "foreach()". La función "for_each()" se utiliza para aplicar una función o función lambda a cada elemento en la pila.

El cuarto "include <stdexcept>", es necesario para lanzar una excepción en caso de que la pila esté vacía. La clase "out_of_range" se utiliza para lanzar una excepción en este caso.

Finalmente, el quinto "include <functional>", es necesario para proporcionar la clase de plantilla "std::function" que se utiliza en el método "foreach()". La clase "std::function" se utiliza para proporcionar una interfaz para funciones y objetos que se comportan como funciones.

# Licencia
Este proyecto está licenciado bajo la Licencia MIT. Consulte el enlace https://opensource.org/licenses/MIT para obtener más información.

# Autor
Este proyecto fue arreglado por Brenda Romero Solano. Si tiene alguna pregunta o sugerencia, no dude en ponerse en contacto conmigo por correo electrónico a brenda.romero@ucr.ac.cr.