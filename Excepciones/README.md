# ALGORITMOS

El proyecto es una aplicación que hace uso de excepciones en C++. Se define una excepción personalizada llamada MiException, la cual se utiliza en el código principal (main) junto con otras excepciones intencionales.

En el archivo MiException.hpp se define la clase MiException que hereda de std::exception. Esta clase tiene una función what() que devuelve un mensaje personalizado para la excepción.

En el archivo main.cpp se utiliza try-catch para manejar diferentes tipos de excepciones intencionales. Primero se lanza la excepción MiException, se captura en el catch y se muestra el mensaje personalizado. Luego se realizan divisiones por cero, acceso fuera de los límites de un arreglo y conversión de tipos inválidos, cada uno en su propio bloque try-catch. En cada caso se captura la excepción y se muestra un mensaje genérico de error.

Se incluye un archivo de configuración para Doxygen, el cual genera documentación para la clase MiException. Además, se provee un archivo Makefile para compilar el programa de manera sencilla.

# Instalación
Para instalar correctamente este proyecto, debe descargar el contenido de esta carpeta y guardarlo en un mismo directorio. Después, puede utilizar una herramienta como GCC para el lenguaje de programación C++.

# Uso
Para ejecutar el programa, puede escribir el comando "make" en la terminal, siempre y cuando ésta tenga instalado el mismo con anterioridad; de lo contrario, deberá correr las instrucciones "**g++ .\exceptions.cpp .\main.cpp -o main.exe**" y "**.\main.exe**" si desea ejecutar la versión por defecto del programa. De lo contrario, el usuario debe editar la función "main" del archivo "main.cpp", de manera que para levantar la excepción personalizada; se ingrese "**throw MiException();**", si se desea evitar que el programa deje de funcionar, esta sentencia deberá de escribirse dentro de un bloque "**try-catch**".

# Investigación

Las excepciones "out-of-range", "domain error" y "length error" son excepciones lanzadas por diferentes funciones de la librería estándar de C++ cuando se producen ciertos errores.

La excepción "out-of-range" se lanza cuando se intenta acceder a un elemento fuera del rango permitido por una estructura de datos, como un vector o una cadena. Por ejemplo, si se intenta acceder al elemento 10 de un vector de tamaño 5, se lanzará una excepción "out-of-range".

La excepción "domain error" se lanza cuando se produce un error matemático debido a una entrada que no se puede procesar. Por ejemplo, si se intenta calcular la raíz cuadrada de un número negativo, se lanzará una excepción "domain error".

La excepción "length error" se lanza cuando se intenta crear una estructura de datos que excede su capacidad máxima. Por ejemplo, si se intenta crear una cadena de caracteres con más elementos de los permitidos, se lanzará una excepción "length error".

Estas excepciones se pueden capturar mediante el uso de bloques "try-catch" en el código y manejarlas según sea necesario para evitar la terminación abrupta del programa.

# Licencia
Este proyecto está licenciado bajo la Licencia MIT. Consulte el enlace https://opensource.org/licenses/MIT para obtener más información.

# Autor
Este proyecto fue arreglado por Brenda Romero Solano. Si tiene alguna pregunta o sugerencia, no dude en ponerse en contacto conmigo por correo electrónico a brenda.romero@ucr.ac.cr.