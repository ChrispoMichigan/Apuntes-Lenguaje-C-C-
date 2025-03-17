#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double L = 3.0;

double f(double x){
	return abs(-L*pow(x, 2) + L + cos(x));
}

int main(){
	cout << fixed << setprecision(12);
	
	
	double a = -1.0762077780896, b = 1.0762077780896;
	int n = 51;
	double fx[n+1];
	double x[n+1];
	double h = (b-a)/n;
	//cout << h << endl;
	int i = 0;
	while(i <= n){
		//cout << i << endl;
		cout << i << " es: " << a + i*h << endl;
		x[i] = a + i*h;
		fx[i] = f(x[i]);
		i++;
	}
	/*
	for(i = 0; i <= n; i++){
		cout << "Valores f(x"<<i<<"): " << fx[i] << endl;
	}
	*/
	double suma_1 = 0, suma_2 = 0, suma_3 = 0;
	for(int a = 1; a <= (n/3)-1; a++){
		//cout << "F(x) del medio: " << a*3 << endl;
		suma_1 = suma_1 + fx[a*3];
	}
	
	for(int a = 0; a <= (n/3)-1; a++){
		//cout << "F(x) del 3 : " << 1+a*3 << endl;
		suma_2 = suma_2 + fx[1+a*3];
		suma_3 = suma_3 + fx[2+a*3];
	}
	
	
	
	cout << "area = " << (3*h/8)*(fx[0] + fx[n] + 2*suma_1 + 3*suma_2 + 3*suma_3) << endl;
}
