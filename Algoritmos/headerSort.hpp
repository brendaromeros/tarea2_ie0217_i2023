/**
 * @file headerSort.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Declaración de las funciones para los diferentes métodos
 * de ordenamiento.
 * @version 0.1
 * @date 2023-05-02
 * 
 * @copyright Copyright (c) 2023
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

#ifndef HEADER_SORT_HPP
#define HEADER_SORT_HPP

#include <iostream>

using namespace std;

/**
 * @brief Declaración del método que utiliza el algoritmo BubbleSort.
 * 
 * @param arr Arreglo de números a ordenar.
 * @param n Tamaño del array de números recibidos.
 */
void bubbleSort(int arr[], int n);

/**
 * @brief Declaración del método que utiliza el algoritmo selectionSort.
 * 
 * @param arr Arreglo de números a ordenar.
 * @param n Tamaño del array de números recibidos.
 */
void selectionSort(int arr[], int n);

/**
 * @brief Declaración del método que utiliza el algoritmo insertionSort.
 * 
 * @param arr Arreglo de números a ordenar.
 * @param n Tamaño del array de números recibidos.
 */
void insertionSort(int arr[], int n);

/**
 * @brief Declaración del método que utiliza el algoritmo quickSort.
 * 
 * @param arr Arreglo de números a ordenar.
 * @param low Índice menor del subarreglo a ordenar
 * @param high Índice mayor del subarreglo a ordenar
 * @param n Tamaño del array de números recibidos.
 */
void quickSort(int arr[], int low, int high,int n);

#endif /* HEADER_SORT_HPP */