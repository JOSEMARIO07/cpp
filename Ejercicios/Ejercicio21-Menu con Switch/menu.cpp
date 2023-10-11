#include <iostream>

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
	    
	    switch (Opcion)
		{
				case 1:
				{
					system ("cls");
					cout << "Estas en el menu de cafe y granitas" << endl;
					system ("pause");
					break;
				 }	
	          default:
			      break;

			  }
			  case 2: {
			system ("cls");
	    	cout << "Estas en el menu de reposteria"<< endl;
	    	system ("pause");
			break;
            
			}
	    default:
			{
            
			cout << "ingrese una opcion valida (0,1,2)" << endl;
			system ("pause");
			break;

	        }
	
	    }	
	
	cout << endl;
	cout << "saliste del sistema";
	
	return 0;
}
