/**
 * @file stackTemplate.cpp
 * @author Brenda Romero Solano (brenda.romero@ucr.ac.cr)
 * @brief El código proporciona una implementación de una estructura 
 * de datos de pila genérica en C++, utilizando la clase Stack. La pila es una estructura de datos 
 * que funciona con el principio de LIFO (último en entrar, primero en salir), es decir, 
 * el último elemento que se agregó a la pila es el primero en salir.
 * 
 * @version 0.2
 * @date 2023-05-05
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

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <functional>

/**
 * @class Stack
 * @brief Clase que implementa una pila en C++.
 *
 * Esta clase permite el almacenamiento y recuperación de elementos en una pila.
 * @tparam T Tipo de datos de la pila
 */

template<typename T>
class Stack {
private:
  std::vector<T> data_; /**< Vector que almacena los elementos de la pila. */

public:

  /**
   * @brief Inserta un elemento en la pila.
   * @param value El valor del elemento a insertar.
   */
  void push(T value) {
    data_.push_back(value);
  }

  /**
   * @brief Recupera y elimina el elemento superior de la pila.
   * @return El valor del elemento recuperado.
   * @throws std::out_of_range si la pila está vacía.
   */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

  /**
   * @brief Elimina todos los elementos de la pila.
   */
  void clear() {
    data_.clear();
  }


  /**
   * @brief Verifica si la pila está vacía.
   * @return true si la pila está vacía, false en caso contrario.
   */
  bool empty() const {
    return data_.empty();
  }

 /**
   * @brief Obtiene el número de elementos en la pila.
   * @return El número de elementos en la pila.
   */

  std::size_t size() const {
    return data_.size();
  }


/**
 * @brief Aplica una función a cada elemento de un vector.
 * @tparam T Tipo de dato del vector.
 * @param v Vector de elementos.
 * @param f Función a aplicar a cada elemento del vector.
 */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief Función principal del programa que utiliza el template Stack con varios tipos de datos.
 * 
 * En esta implementación se hacen dos Stack distinto, uno de ellos es de valores con los cuales
 * solo se muestran al usuario, por medio de las funciones foreach y pop, mientras que el segundo
 * es un Stack de caracteres que de igual forma se muestran al usuario, además se encuentra comentada
 * una línea de código que provocara la excepción out_of_range ya que para ese momento, el stack estará vacío.
 * @return 0 si el programa se ejecuta correctamente.
 */
int main() {
  Stack<int> s;     ///< Stack de tipo int s
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  Stack<char> letra;    ///<Stack de tipo char letra

  letra.push('H');
  letra.push('o');
  letra.push('o');

  std::cout << "Last char: " << letra.pop() << std::endl;

  letra.push('l');
  letra.push('a');
  std::cout << "Tamaño: " << letra.size() << std::endl;

  letra.foreach([](char& value) {
    std::cout << value;
  });
  std::cout << std::endl;

  letra.push(' ');
  letra.push('t');
  letra.push('o');
  letra.push('d');
  letra.push('o');
  letra.push(' ');
  letra.push('b');
  letra.push('i');
  letra.push('e');
  letra.push('n');
  letra.push('?');

  letra.foreach([](char& value) {
    std::cout << value;
  });
  std::cout << std::endl;
  letra.clear();
  std::cout << "Tamaño: " << letra.size() << std::endl;

  ///<std::cout << "Last char: " << letra.pop() << std::endl;
  return 0;
}
