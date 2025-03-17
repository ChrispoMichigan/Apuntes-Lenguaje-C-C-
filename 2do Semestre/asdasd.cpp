#include <iostream>
#include <string>

using namespace std;

void funcion();

int edad = 35;
string nombre = "Juan";
	
int main()
{
	funcion();
	cout << "El anio que viene tendre " << edad << " anios" << endl;
	return 0;
}

void funcion()
{
	cout << "Mi nombre es " << nombre << " y tengo " << edad << " anios" << endl;
	edad = edad + 1;
}
