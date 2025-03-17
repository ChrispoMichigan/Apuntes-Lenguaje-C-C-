#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double L = 3.0;

double f(double x){
	
	//return abs(cos((L/50.0)*pow(x,2)));
 	return abs(-L*pow(x, 2) + L + cos(x));
}

int main(){
		
	cout << fixed << setprecision(12);
	
	int i = 0, n = 52;
	double a = -1.0762077780896, b = 1.0762077780896, suma_a = 0, suma_b = 0, suma_c = 0;
	double x[n+1];
	double fx[n+1];
	
	double h = (b-a)/n;
	
	i = 0;
	while(i <= n){
		//cout << i << endl;
		x[i] = a + i*h;
		//cout << "x["<< i <<"]" << " es: " << x[i] << endl;
		fx[i] = f(x[i]);
		cout << "Fx["<< i <<"]" << " es: " << fx[i] << endl;
		i++;
	}
	cout << endl;
	
	cout << "7 * [f(x0) + f(x"<<n<<")] " << endl;
	
	
	for(i = 1; i <= (n/4)-1; i++){
		
		cout << "14 * f(x"<<i*4<<")\t";
		suma_a = suma_a + fx[i*4];
	}
	
	cout << endl;
	
	for(i = 1; i <= n/2; i++){
		
		cout << "32 * f(x"<<i*2-1<<")\t";
		//cout << "i es igual a " << i << endl;
		suma_b = suma_b + fx[i*2-1];
	}
	
	cout << endl;
	
	for(i = 0; i <= (n/4)-1; i++){
		
		cout << "12 * f(x"<<i*4+2<<")\t";
		suma_c = suma_c + fx[i*4+2];
	}
	cout << endl;
	
	cout << "El area es igual a " << (2*h)/(45)*(7*(fx[0] + fx[n]) + 14*suma_a + 32*suma_b + 12*suma_c);
	
	
	return 0;
}
