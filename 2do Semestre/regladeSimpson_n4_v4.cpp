#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double L = 3.0;

double funcion_1(double x){
	
 	return abs(x);
}

double funcion_2(double x){
	
 	return abs(cos(x) + x);
}

double funcion_3(double x){
	
 	return abs(pow(x, 2) - 10.3);
}

double sumatoria(int i, int n, int m, int b, double fx[]){
	double suma = 0;
	
	for(i; i <= n; i++){
		suma = suma + fx[m*i + b];
	}
	return suma;
}

double calcular_area(int n, double a, double b, double (*funcion)(double)){
	
	int i = 0;
	double h = (b-a)/n;
	double x[n+1];
	double fx[n+1];
	i = 0;
	while(i <= n){
		//cout << i << endl;
		x[i] = a + i*h;
		//cout << "x["<< i <<"]" << " es: " << x[i] << endl;
		fx[i] = funcion(x[i]);
		//cout << "Fx["<< i <<"]" << " es: " << fx[i] << endl;
		i++;
	}
	//cout << "7 * [f(x0) + f(x"<<n<<")] " << endl;
	//sumatoria(int i, int n, int m, int b)
	
	double suma_a = 0, suma_b = 0, suma_c = 0;
	
	suma_a = sumatoria(1, (n/4)-1, 4, 0, fx);
	
	suma_b = sumatoria(1, (n/2), 2, -1, fx);
	
	suma_c = sumatoria(0, (n/4)-1, 4, 2, fx);
	
	return (2*h)/(45)*(7*(fx[0] + fx[n]) + 14*suma_a + 32*suma_b + 12*suma_c);
}


int main(){
		
	cout << fixed << setprecision(12);
	int n = 40;
	double a = -3.2093613071762, b = -2.6123630454684;
	double c = -1.5707963310885, d = 1.5707963268686;
	double e = 3.6075051037576;
	double area_total, area1, area2, area3, area_parabola, area4;
	
	//calcular_area(int n, double a, double b, *funcion)())
	//Resta
	area1 = calcular_area(n, a, b, funcion_3);
	
	area2 = calcular_area(n, b, c, funcion_2);
	
	area3 = calcular_area(n, c, 0, funcion_1);
	
	area_parabola = calcular_area(n, a, -a, funcion_3);
	
	area_total = area_parabola - area1 - area2 - area3;
	
	area_total = area_total + calcular_area(n, 0, d, funcion_1);
	
	area_total = area_total + calcular_area(n, d, e, funcion_2);
	
	area_total = area_total - calcular_area(n, -a, e, funcion_3);
	
	cout << area_total << " area total" << endl;
	
	return 0;
}
