#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	// Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta;
    char NoestaExenta;

    cout << "ingrese el subtotal de la factura; ";
    cin >> subtotal;

    cout << "ingrese el descuento (0,10,15,20) ";
    cin >> descuento;
    
    cout << "factura exenta? s/n ";
    cin >> estaExenta;
    
    if (estaExenta == 's' || estaExenta == 'S')
    cout << "esta factura esta exenta";
    
    
    // Proceso
    
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;  
    

    // Salida

    cout << endl;
    cout << "Total a pagar es: " << total;

    return 0;

}
