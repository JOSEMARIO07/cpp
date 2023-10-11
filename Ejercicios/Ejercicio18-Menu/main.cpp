#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int Opcion = 0;
	
	while (true) {
		
	    system ("cls");
	    cout << "****" << endl;
	    cout << "MENU" << endl;
	    cout << "****" << endl;
	    
	    cout << endl;
	    cout << "1 - Cafe y Granitas" << endl;
	    cout << "2 - Resposteria" << endl;
	    cout << "0 - Salir" << endl;
	    
	    cout << "Ingrese una opcion del menu";
	    cin >> Opcion;
	    
	    if (Opcion == 1) {
	    	system ("cls");
	    	cout << "Estas en el menu de cafe y granitas" << endl;
	    	system ("pause");
	    	
	    }	
	    
	    if (Opcion == 2) {
	    	system ("cls");
	    	cout << "Estas en el menu de reposteria"<< endl;
	    	system ("pause");
	    
	    }
	
	    if (Opcion == 0) {
	    	break;
	    	
	    }	
	}
	cout << endl;
	cout << "saliste del sistema";
	
	return 0;
}
