/* Programa que implementa las operaciones principales de una lista utilizando la biblioteca <list>.
   Por: [FRANKLIN BRACAMONTE].
   Para: [PROGRAMACION I UBA]. */

#include <iostream>
#include <list>
#include <algorithm>
#include <conio.h> // Biblioteca para la función _getch() en Windows

using namespace std;

void mostrarLista(list<string>& lista) {
    for (const string& elemento : lista) {
        cout << elemento << " ";
    }
    cout << endl;
}

int main() {
    list<string> estudiantes; // Definición de la lista de tipo string
    int opcion;

    do {
        // Menú principal
        cout << "\nMENU PRINCIPAL\n";
        cout << "1. Insertar estudiante\n";
        cout << "2. Eliminar estudiante\n";
        cout << "3. Buscar estudiante\n";
        cout << "4. Mostrar lista de estudiantes\n";
        cout << "5. Tamaño de la lista\n";
        cout << "6. Ordenar lista\n";
        cout << "7. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                cout << "Ingrese el nombre del estudiante a insertar: ";
                cin >> nombre;
                estudiantes.push_back(nombre);
                break;
            }
            case 2: {
                if (!estudiantes.empty()) {
                    string nombre;
                    cout << "Ingrese el nombre del estudiante a eliminar: ";
                    cin >> nombre;
                    estudiantes.remove(nombre);
                } else {
                    cout << "La lista está vacía. No se puede eliminar." << endl;
                }
                break;
            }
            case 3: {
                if (!estudiantes.empty()) {
                    string nombre;
                    cout << "Ingrese el nombre del estudiante a buscar: ";
                    cin >> nombre;
                    auto it = find(estudiantes.begin(), estudiantes.end(), nombre);
                    if (it != estudiantes.end()) {
                        cout << "Estudiante encontrado en la lista." << endl;
                    } else {
                        cout << "Estudiante no encontrado en la lista." << endl;
                    }
                } else {
                    cout << "La lista está vacía. No se puede buscar." << endl;
                }
                break;
            }
            case 4: {
                if (!estudiantes.empty()) {
                    cout << "Lista de estudiantes:" << endl;
                    mostrarLista(estudiantes);
                } else {
                    cout << "La lista está vacía." << endl;
                }
                break;
            }
            case 5: {
                cout << "Tamaño de la lista: " << estudiantes.size() << endl;
                break;
            }
            case 6: {
                estudiantes.sort();
                cout << "Lista ordenada." << endl;
                break;
            }
            case 7: {
                cout << "Saliendo del programa...";
                break;
            }
            default:
                cout << "Opción inválida. Inténtalo nuevamente." << endl;
        }

        // Esperar a que se presione una tecla para continuar
        cout << "\nPresiona cualquier tecla para continuar...";
        _getch(); // Espera a la entrada del teclado
        system("cls"); // Limpiar la pantalla en Windows (puede variar en otros sistemas operativos)
    } while (opcion != 7);

    return 0;
}
