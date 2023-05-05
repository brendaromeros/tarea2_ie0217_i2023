/**
 * @file main.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Este es el archivo principal, que sirve como punto de entrada a un programa con
 * el fin de probar el correcto funcionamiento de la implementación de la excepción personalizada, además de
 * de la prueba de las tres excepciones a inveestigar.
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
 * @brief Función principal que prueba la excepción personalizada.
 * 
 * Se captura una excepción del tipo std::exception como referencia. 
 * Se llama a la función what() de la excepción capturada para imprimir
 * un mensaje de error en la consola.
 * 
 * @return int Si no se encuntra ningún error, retorna 0.
 */
int main() {
    try {
        throw MiException();
    } catch ( const MiException& e) {
        cerr << "Error: " << e.what() << endl;
    }
    try {
        throw out_of_range("Fuera de rango.");
    } catch ( const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    try {
        throw domain_error("Dominio matemático inválido.");
    } catch ( const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    try {
        throw length_error("String creado es muy grande.");
    } catch ( const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
}