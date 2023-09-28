#include <iostream>


using namespace std;

int main()
{
	
	float monto =0;
	float impuesto= 0;
	float total = 0;
	float subtotal = 0;
	char estaExenta;
	
	cout << " Ingrese el valor de la compra: " << endl;
	cin  >>   monto;
	
	cout << " La factura de esta exenta es de? S / N: " << endl;
	cin >> subtotal;
	
	if(estaExenta =='S'|| estaExenta =='s')
	{	
	impuesto = monto *0.15;
	total = monto + impuesto;
	}
	
	else
	if(estaExenta=='S'|| estaExenta== 's')
	{
	total = monto;
	}
	
	cout << " El total a pagar es de: " << total << endl;
	
	return 0;
}
