#include <iostream>

using namespace std;

string nombreCompleto (string nombre, string apellido)
{
    return nombre + ' ' + apellido;
}

int main(int argc, char const *argv[])
{
    string primerNombre= "";
    string primerApellido= "";

    cout << "ingrese su primer nombre: ";
    cin >> primerNombre;
    cout << "ingrese su primer apellido: ";
    cin >> primerApellido;

    cout << endl;

    cout << "Nombre completo: ";
    cout << "Nombre Completo: " << nombreCompleto(primerNombre, primerApellido);
    return 0;
}
