//Definición de una clase con una función miembro
//El programa define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje;
//Crea un objeto LibroCalificaciones y llama su función mostrar Mensaje.

#include <iostream>

using std::cout;
using std::cin;

class LibroCalificaciones
{
public:

    void mostrarMensaje(){
    cout << "¡Bienvenido al libro de calificaciónes!";
    }//fin de la función mostrar mensaje
};//fin de la clase LibroCalificaciones

//la función main inicia la ejecución del programa
int main()
{
    LibroCalificaciones miLibroCalificaciones; //crea un objeto LibroCalificaciones
    miLibroCalificaciones.mostrarMensaje(); //llama la función mostrarMensaje del objeto

    return 0; //indica que el programa terminó correctamente
}//fin del main
