#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double L = 3.0;;

double f(double x){
 	return abs(-L*pow(x, 2) + L + cos(x));
}

int main(){
	
	cout << fixed << setprecision(12);
	
	int n = 50, i = 0;
	
	double a = -1.0762077780896;
	double b = 1.0762077780896;
	double fx[n+1];
	double h = (b-a)/n;
	double sumatoria_1 = 0, sumatoria_2 = 0;
	
	i = 0;
	while(i <= n){
		fx[i] = f(a + i*h);
		cout << "Fx["<< i <<"]" << " es: " << fx[i] << endl;
		i++;
	}
	
	for(i = 0; i <= (n/2)-1; i++){
		sumatoria_1 = sumatoria_1 + fx[2*i+1];
	}
	sumatoria_1 = sumatoria_1 * 4;
	for(i = 1; i <= (n/2)-1; i++){
		sumatoria_2 = sumatoria_2 + fx[2*i];
	}
	sumatoria_2 = sumatoria_2 * 2;
	
	cout << "Area igual a " << (h/3)*(fx[0] + fx[n] + sumatoria_1 + sumatoria_2) << endl;
	
	return 0;	
}
