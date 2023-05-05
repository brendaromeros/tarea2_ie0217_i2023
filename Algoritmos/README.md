# ALGORITMOS
En este proyecto se implementaron diversos algoritmos de ordenamiento de números en C++. Los algoritmos implementados fueron: Bubble Sort, Insertion Sort, Selection Sort y Quick Sort.

Cada uno de estos algoritmos fue implementado en un mismo archivo y se utilizó una función genérica para intercambiar elementos en los algoritmos. Además, cada función se encarga de imprimir los elementos del arreglo después de ordenarlos.

Se incluye una carpeta con la documentación utilizando doxygen, el cual genera documentación para el proyecto. Además, se provee un archivo Makefile para compilar el programa de manera sencilla.

# Instalación
Para instalar correctamente este proyecto, debe descargar el contenido de esta carpeta y guardarlo en un mismo directorio. Después, puede utilizar una herramienta como GCC para el lenguaje de programación C++.

# Uso
Para ejecutar el programa, puede escribir el comando "make" en la terminal, siempre y cuando ésta tenga instalado el mismo con anterioridad; de lo contrario, deberá correr las instrucciones:

```
g++ .\sort.cpp .\main.cpp -o main.exe
.\main.exe
```
 si desea ejecutar la versión por defecto del programa. De lo contrario, el usuario debe editar la función "main" del archivo "main.cpp", de manera que se guarde como una constante el tamaño del arreglo a ordenar, se ingresen los parámetros array de números y el tamaño del mismo en las para las funciones "bubbleSort", "selectionSort" e "insertionSort", mientras que para la función "quickSort" se debe agregar el array de números, la primera y última posición a evaluar y por último, el tamaño del array.

# Análisis de algoritmos

A continuación se muestra un análisis de la complejidad de cada uno de los algoritmos de control implementados en este proyecto utilizando la notación Big-O:

- BubbleSort: Este algoritmo tiene una complejidad de tiempo de O(n^2), donde n es el número de elementos a ordenar. De hecho, en el peor de los casos, se deben comparar todos los pares de elementos del arreglo.

- SelectionSort: Este algoritmo tiene una complejidad temporal de O(n^2), donde n es el número de elementos a ordenar. De hecho, el elemento más pequeño de la matriz se debe encontrar en cada iteración, lo que implica comparar cada elemento con todos los demás elementos de la matriz.

- InsertionSort: Este algoritmo tiene una complejidad temporal de O(n^2) en el peor de los casos y O(n) en el mejor de los casos. De hecho, en el peor de los casos, se debe recorrer toda la matriz para insertar cada elemento en la posición correcta, lo que implica comparar cada elemento con todos los elementos anteriores. En el mejor de los casos, cuando la matriz ya está ordenada, se pueden hacer comparaciones simples para ver si un elemento ya está en la posición correcta.

- Quicksort: Este algoritmo tiene una complejidad temporal promedio de O(n log n), donde n es el número de elementos a ordenar. Sin embargo, en el peor de los casos, su complejidad temporal es O(n^2). De hecho, la complejidad del algoritmo depende en gran medida del elemento comercial elegido.En el peor caso, si el pivote es siempre el elemento más grande o más pequeño del arreglo, se deben hacer muchas particiones y la complejidad se acerca a O(n^2). En el mejor caso, el pivote divide el arreglo en dos mitades iguales y el algoritmo es extremadamente rápido.

Es importante tener en cuenta que la complejidad de cada algoritmo puede variar dependiendo de factores como el número de elementos a ordenar, el tipo de datos a ordenar y el estado inicial del arreglo. Sin embargo, en general, estos son los peores casos posibles para cada algoritmo.

# Licencia
Este proyecto está licenciado bajo la Licencia MIT. Consulte el enlace https://opensource.org/licenses/MIT para obtener más información.

# Autor
Este proyecto fue arreglado por Brenda Romero Solano. Si tiene alguna pregunta o sugerencia, no dude en ponerse en contacto conmigo por correo electrónico a brenda.romero@ucr.ac.cr.