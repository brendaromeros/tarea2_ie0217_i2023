/**
 * @file main.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Este es el archivo principal, que sirve como punto de entrada a un programa con
 * el fin de probar el correcto funcionamiento de la implementación de los algoritmos.
 * 
 * @version 0.1
 * @date 2023-05-03
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
#include "main.hpp"

/**
 * @brief Función principal que revisa si los algoritmos estan bien implementados
 * 
 * Crea diferentes arrays de números para ordenar con el fin de probar la implementación 
 * realizada, esto debido a que las funciones se encargan de ordenar el mismo y no hacen
 * una copia del array original.
 * 
 * @return int Si no se encuntra ningún error, retorna 0.
 */
int main(){
    const int n = 16 ;      ///< Constante del tamaño del arraglo a utilizar.
    int one[n]={6,5,3,17,8,3,2,4,424,24,22,425,543,6436,25,2533};   ///< Primer array de ejemplo.

    bubbleSort(one, n);
    

    int two[n]={46,31415,33,3117,8,3113,2,4,424,2424,4222,43225,544243,6436,2513,2533}; ///< Segundo array de ejemplo.

    selectionSort(two, n);

    int three[n]={16,5,3,17,814,3,2,4,424424,24,2242,42425,4543,424,4143,55455};   ///< Tercer array de ejemplo.

    insertionSort(three, n);

    int four[n]={6,5,33131,17,8,3,31422,4,4424,422,96,535,7686,6436,7625,2533};  ///< Cuarto array de ejemplo.

    quickSort(four,0,n-1, n);

    return 0;
}