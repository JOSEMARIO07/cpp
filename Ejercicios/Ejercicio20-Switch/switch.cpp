#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;
    cout << "ingrese una opcion";
    cin >> opcion;

    switch (opcion);

{
case1:
{
    cout << "escogiste 1" << endl;
    cout << "segunda linea opcion 1" << endl;
    break;

}
case 2:
cout << "escogiste 2" << endl;
break;

case 3:
cout << "escogiste 3" << endl;

default:
cout << "ingrese una opcion entre 1 y 3" << endl;
break;

}

    return 0;
}
