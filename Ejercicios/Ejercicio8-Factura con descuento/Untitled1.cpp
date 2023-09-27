#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    char estaExenta;

    cout << "ingrese el subtotal de la factura; ";
    cin >> subtotal;
    cout << "factura exenta? s/n";
	cin >> estaExenta;

    // Proceso

    total = subtotal + (subtotal*0.15);
    if (estaExenta == 's' || estaExenta == 'S');
    
    // Salida

    cout << endl;
    cout << "Total a pagar es: " << total;
    cout << "esta compra esta exenta";

    return 0;  
}

