#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int nota = 0;

    cout << "ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota <100 && nota >=95 )
	{
        cout << "A++";
        
    } 
	
	if (nota < 95 && nota >= 90)
	{
        cout << "obtuviste una A+";
    
    }
	
	if (nota <90 && nota >=85)
	{
        cout << "obtuviste una A";

   	} 
	
	if (nota <85 && nota >=80)
	{
        cout << "obtuviste una A-";

   	} 
	
	if (nota <80 && nota >=75)
	{
        cout << "obtuviste una B+";

   	}    	
	
    if (nota <75 && nota >=70)
	{
        cout << "obtuviste una B";

   	} 
   	
   	if (nota <70 && nota >=65)
	{
        cout << "obtuviste una B-";

   	} 
   	
   	if (nota <65 && nota >=60)
	{
        cout << "obtuviste una C+";

   	} 
   	
   	if (nota <60 && nota >=55)
	{
        cout << "obtuviste una C";

   	} 
   	
   	if (nota <55 && nota >=50)
	{
        cout << "obtuviste una C-";

   	} 
   	
   	if (nota <50 && nota >=45)
	{
        cout << "obtuviste una D+";

   	} 
   	
   	if (nota <45 && nota >=40)
	{
        cout << "obtuviste una D";

   	} 
   	
   	if (nota <40 && nota >=35)
	{
        cout << "obtuviste una D-";

   	} 
   	
   	if (nota <35 && nota >=30)
	{
        cout << "obtuviste una E+";

   	} 
   	
   	if (nota <30 && nota >=25)
	{
        cout << "obtuviste una E";

   	} 
	
	if (nota <25 && nota >=20)
	{
        cout << "obtuviste una E-";

   	} 
	
	if (nota <20 && nota >=15)
	{
        cout << "obtuviste una F+";

   	}    	
	
    if (nota <15 && nota >=10)
	{
        cout << "obtuviste una F";

   	} 
   	
   	if (nota <10 && nota >=5)
	{
        cout << "obtuviste una F-";

   	} 
   	
   	if (nota <5 && nota >=0)
	{
        cout << "obtuviste una F--";

   	} 
   	
	 return 0; 
	  }
