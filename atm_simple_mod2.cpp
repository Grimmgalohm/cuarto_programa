//Define la clase LibroCalificaciones con una funcion miembro que recibe un parámetro;
//Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> //el programa usa la clase string estandar de C++
using std::string;
using std::getline;

//definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    // función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje( string nombreCurso )
    {
        cout << "Bienvenido al libro de calificaciónes para \n" << nombreCurso << "!" << endl;
    }//fin de la función mostrarMensaje
};//fin de la clase libroCalificaciónes

//la función main comienza la ejecución del programa
int main()
{
    string nombreDelCurso; //cadena de carácteres que almacena el nombre del curso
    LibroCalificaciones miLibroCalificaciones; //crea un objeto LibroCalificaciones llamado miLibroCalificaciones

    //pide y recibe el nombre del curso como entrada
    cout << "Escriba el nombre del curso: " << endl;
    getline(cin, nombreDelCurso); //lee el nombre del curso con espacios en blanco
    cout << endl; //imprime una linea en blanco

    //llama a la función mostrarMensaje de miLibroCalificaciones
    //y pasa el nombreDelCurso como argumento
    miLibroCalificaciones.mostrarMensaje( nombreDelCurso );

    return 0; //indica que el programa finalizó correctamente
}//fin de main
