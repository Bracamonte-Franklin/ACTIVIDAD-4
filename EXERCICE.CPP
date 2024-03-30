/* Programa que implementa las funciones principales de una pila utilizando la biblioteca <stack>.
   Por: [FRANKLIN BRACAMONTE].
   Para: [PROGRAMACION I UBA]. */

#include <iostream>
#include <stack>
#include <conio.h> // Biblioteca para la función _getch() en Windows

using namespace std;

int main() {
    stack<string> lenguajes; // Definición de la pila de tipo string

    // Agregar elementos a la pila
    lenguajes.push("JavaScript");
    lenguajes.push("C++");
    lenguajes.push("C#");
    lenguajes.push("Java");
    lenguajes.push("Python");

    // Mostrar el tamaño de la pila
    cout << "Tamaño de la pila: " << lenguajes.size() << endl;

    // Verificar si la pila está vacía
    if (lenguajes.empty()) {
        cout << "La pila está vacía." << endl;
    } else {
        cout << "La pila no está vacía." << endl;
    }

    // Mostrar el elemento en la cima de la pila (top)
    cout << "Elemento en la cima de la pila: " << lenguajes.top() << endl;

    // Quitar el elemento en la cima de la pila (pop)
    lenguajes.pop();

    // Mostrar el elemento en la nueva cima de la pila
    cout << "Elemento en la nueva cima de la pila: " << lenguajes.top() << endl;

    // Esperar a que se presione una tecla para cerrar el programa
    cout << "Presiona cualquier tecla para salir...";
    _getch(); // Espera a la entrada del teclado
    return 0;
}
