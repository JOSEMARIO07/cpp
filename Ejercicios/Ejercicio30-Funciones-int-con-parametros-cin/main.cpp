#include <iostream>

using namespace std;

int sumar(int a, int b){
}
    int isumar(int a, int b ){
    return a + b;
  }

  int isumar(int a, int b ){
    return a - b;
  }
  int main(int argc, char const *argv[])
  {
    system ("cls");

    int numero1 = 0;
    int numero2 = 0;

    cout << "ingrese el valor de a: ";
    cin >> numero1;
    cout << "ingrese el valor de b: ";
    cin >> numero2;

    cout << endl;

    cout << "el resultado de la suma es: " << sumar(numero1, numero2);
    cout << endl;
    cout << "el resultado de la resta es: " << restar(numero1, numero2);
    cout << endl;

    return 0;
}
