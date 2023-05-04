/**
 * @file sort.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Implementación de las funciones de algoritmos  de ordenamiento.
 * 
 * Este archivo contiene la implementación de varios algoritmos de ordenamiento, incluyendo
 * bubble sort, selection sort, insertion sort y quick sort. Cada uno de estos
 * algoritmos se ha implementado en una función separada para facilitar su uso y pruebas.
 * 
 * @version 0.1
 * @date 2023-05-02
 * 
 * @copyright Copyright (c) 2023.
 * 
 * @see https://opensource.org/licenses/MIT Licencia MIT

 * Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023
 * Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
 * software y los archivos de documentación asociados (el "Software"), para
 * utilizar el Software sin restricciones, incluyendo, sin limitación, los
 * derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
 * sublicenciar y/o vender copias del Software, y para permitir a las personas a
 * quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
 * condiciones:
 * 
 * El aviso de copyright anterior y este aviso de permiso se incluirán en todas
 * las copias o partes sustanciales del Software.
 * 
 * EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
 * IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
 * IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
 * AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
 * DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
 * OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
 * OTROS ACUERDOS EN EL SOFTWARE.
 */
#include "headerSort.hpp"

/**
 * @brief Implementación del método que utiliza el algoritmo BubbleSort.
 * 
 * Este método se encarga de ordenar un conjunto de números recibidos
 * en un array al recorrer el mismo y verificar si la entrada actual es
 * mayor a la que sigue, para en dicho caso intercambiar de lugar ambos 
 * valores y continuar revisando el mismo; dicho proceso se realiza hasta 
 * que todos los valores se encuentren en orden ascendente para al final
 * recorrer el array e imprimir la lista ordenada.
 * 
 * @param arr Números a ordenar.
 * @param n Tamaño del array de números recibidos.
 * @complexity O(n^2)
 */
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for (int k = 0; k < n; k++){
        cout << arr[k] << ' ';
    }
    cout << endl;
}

/**
 * @brief Implementación del método que utiliza el algoritmo selectionSort.
 * 
 * Este método se encarga de ordenar un conjunto de números recibidos
 * en un array al recorrer el array para buscar el número menor de la lista e intercambiarlo por 
 * el primer digito sin ordenar hasta que todos se encuentren en la posición que les
 * corresponda de modo que al final se imprimima la lista ordenada.
 * 
 * @param arr Números a ordenar.
 * @param n Tamaño del array de números recibidos.
 * @complexity O(n^2)
 */
void selectionSort(int arr[], int n){
    int low;         ///< Indice que contiene el número menor.
    for (int i =0; i < n; i++ ){
        low= i;
        for (int j =i+1; j<n ;j++){
            if (arr[low] > arr[j]){
                low=j;
            }
        }
        swap(arr[i], arr[low]);
    }
    for (int k=0; k < n;k++){
        cout << arr[k]<< ' ';
    }
    cout << endl;
}

/**
 * @brief Implementación del método que utiliza el algoritmo insertionSort.
 * 
 * Este método se encarga de ordenar un conjunto de números recibidos
 * en un array al recorrer el array recibido, para después guardar temporalmente
 * el número a ordenar, posteriormente se encarga de mover hacia la izquierda los valores
 * mayores al número guardado de modo que se ingrese el número en su posición correcta, lo 
 * anterior hasta que el array este ordenado para al final imprimir la lista ordenada.
 * 
 * @param arr Números a ordenar.
 * @param n Tamaño del array de números recibidos.
 * @complexity O(n^2)
 */
void insertionSort(int arr[], int n){
    int currentNumber;      ///< Número actual a ordenar.
    int j;                  ///< Contador interno para posición actual.
        for (int i =1; i < n; i++ ){
            currentNumber=arr[i];
            j= i-1;
            while (j >= 0 && arr[j] > currentNumber){
               arr[j+1]=arr[j];
               j--;
            }
            arr[j+1]=currentNumber;
        }
        for (int k=0; k < n;k++){
            cout << arr[k]<< ' ';
        }
        cout << endl;
}

/**
 * @brief Implementación del método que utiliza el algoritmo quickSort.
 * 
 * Este método se encarga de ordenar un conjunto de números recibidos
 * en un array al separar el array en subarray de modo que recursivamente,
 * se acomoden los datos de menor a menor para al final imprimir la lista ordenada.
 * 
 * @param arr Números a ordenar.
 * @param low Indice menor.
 * @param high Indice mayor.
 * @param n Tamaño del array de números recibidos.
 * @complexity O(n log n)
 */
void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pivot = arr[high];      ///< Valor en la posición pivote.
        int i = (low - 1);          ///< Contador interno para posicón actual.
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;             ///< Posición del final pivote
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
    else if (high == n - 1) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}