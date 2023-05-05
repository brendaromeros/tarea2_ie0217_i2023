/**
 * @file exceptions.hpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief Definición de la clase MiException.
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
#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

/**
 * @brief Clase para una excepción personalizada.
 *
 * Esta clase hereda de la clase std::exception y proporciona una implementación
 * personalizada de la función what() para mostrar un mensaje de error personalizado.
 */
class MiException : public std::exception {
public:

/**
   * @brief Declaración del método que vuelve una cadena de caracteres con una descripción del error.
   *
   * @return Una cadena de caracteres con una descripción del error.
   */
  const char* what() const throw() override;
};

#endif // EXCEPTIONS_HPP