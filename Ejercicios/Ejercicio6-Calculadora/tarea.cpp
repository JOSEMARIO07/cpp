#include <iostream>

using namespace std;

int main()
{
	
//Datos de Entrada	
	
	int a=0;
	int b=0;
	int suma=0;
	int resta=0;
	int multiplicacion=0;
	double division=0;
	
	cout << "ingrese un valor: ";
	cin >> a;
	cout << "ingrese otro valor";
	cin >> b;

//Desarrollo

suma=a+b;
resta=a-b;
multiplicacion=a*b;
division=a/b;

//Datos de Salida
cout << endl;
cout << "la suma es: "<< suma << endl;
cout << "la resta es: " << resta << endl;
cout << "la multiplicacion es: "<< multiplicacion << endl;
cout << "la division es: " << division << endl;

return 0;
}
