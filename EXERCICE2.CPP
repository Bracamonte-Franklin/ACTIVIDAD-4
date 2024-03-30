/* Programa que implementa las funciones principales de una cola utilizando la biblioteca <queue>.
   Por: [FRANKLIN BRACAMONTE].
   Para: [PROGRAMACION I UBA]. */

#include <iostream>
#include <queue>
#include <conio.h> // Biblioteca para la función _getch() en Windows

using namespace std;

int main() {
    queue<string> lideresTIC; // Definición de la cola de tipo string

    // Agregar elementos a la cola
    lideresTIC.push("Verizon");
    lideresTIC.push("Microsoft");
    lideresTIC.push("Samsung");
    lideresTIC.push("Alphabet");
    lideresTIC.push("Apple");

    // Mostrar el tamaño de la cola
    cout << "Tamaño de la cola: " << lideresTIC.size() << endl;

    // Verificar si la cola está vacía
    if (lideresTIC.empty()) {
        cout << "La cola está vacía." << endl;
    } else {
        cout << "La cola no está vacía." << endl;
    }

    // Mostrar el elemento al frente de la cola (front)
    cout << "Elemento al frente de la cola: " << lideresTIC.front() << endl;

    // Mostrar el elemento al final de la cola (back)
    cout << "Elemento al final de la cola: " << lideresTIC.back() << endl;

    // Quitar el elemento al frente de la cola (pop)
    lideresTIC.pop();

    // Mostrar el nuevo elemento al frente de la cola
    cout << "Nuevo elemento al frente de la cola: " << lideresTIC.front() << endl;

    // Esperar a que se presione una tecla para cerrar el programa
    cout << "Presiona cualquier tecla para salir...";
    _getch(); // Espera a la entrada del teclado
    return 0;
}
