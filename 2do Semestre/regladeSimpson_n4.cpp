#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double L = 3.0;

double f(double x){
	
	return abs(cos((L/50.0)*pow(x,2)));
 
}

int main(){
		
	cout << fixed << setprecision(12);
	
	int i = 0, n = 32;
	double a = 0.0, b = 5.0, suma_a = 0, suma_b = 0, suma_c = 0;
	double x[n+1];
	double fx[n+1];
	
	double h = (b-a)/n;
	
	while(i <= n){
		//cout << i << endl;
		x[i] = a + i*h;
		//cout << "x["<< i <<"]" << " es: " << x[i] << endl;
		fx[i] = f(x[i]);
		//cout << "Fx["<< i <<"]" << " es: " << fx[i] << endl;
		i++;
	}
	cout << endl;
	for(i = 1; i <= (n+3)/5; i++){
		
		cout << "14 * f(x"<<i*4<<")" << endl;
		suma_a = suma_a + fx[i*4];
	}
	
	cout << endl;
	
	for(i = 0; i <= (n-2)/2; i++){
		
		cout << "32 * f(x"<<i*2+1<<")" << endl;
		suma_b = suma_b + fx[i*2+1];
	}
	
	cout << endl;
	
	for(i = 0; i <= (n+3)/5; i++){
		
		cout << "12 * f(x"<<i*4+2<<")" << endl;
		suma_c = suma_c + fx[i*4+2];
	}
	
	
	cout << "El area es igual a " << (2*h)/(45)*(7*(fx[0] + fx[n]) + 14*suma_a + 32*suma_b + 12*suma_c);
	
	
	return 0;
}
