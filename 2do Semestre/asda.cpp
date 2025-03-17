/*Escribe un programa en el que se realice lo siguiente:
1. Declara un string que contenga el siquiente texto: "Estamos aprandiando"
2. Cambia las "a" definidas de forma incorrecta.
3. Anade "en Python" al final del string.
4. Declara atro string que contenga '"a programar ", e introdúcelo delante de "en"
5. Sustituye "Python" par "C++"
6. Elimina todo lo que esté después de "aprendiendo".
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string texto = "Estamos aprandiendo";
	cout << "Tarea 1: " << texto << endl;
	
	texto[11] = 'e';
	texto[15] = 'e'; // nada de bucles toi tomta
	cout << "Tarea 2: " << texto << endl;
	
	string texto1 = " en Python"; 
	texto += texto1; // aca se que hay muchas otras pero pero :(
	cout << "Tarea 3: " << texto << endl;
	
	texto.insert(19, " a programar");
	cout << "Tarea 4: " << texto << endl;
	
	texto.replace(texto.find("Python"), 7, "C++");
	cout << "Tarea 5: " << texto << endl;
	
	texto.erase(19, 26); // pudiera ser tmb utilizando el texto.find para buscar donde este "aprendiendo" y eliminar a partir de ahi?
	cout << "Tarea 6: " << texto << endl;
    return 0;
}
