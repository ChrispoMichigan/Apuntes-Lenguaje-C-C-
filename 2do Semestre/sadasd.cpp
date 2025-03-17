#include <iostream>
#include <iomanip>
#include <cmath>

/* Definici�n de la funci�n a resolver. Cambia esta funci�n para resolver otro problema. */
#define f(x) x*x

using namespace std;

int main() {
    /* Declaraci�n de variables requeridas */
    float x0, x1, x, f0, f1, f, e;
    int step = 1;

    /* Configurando la precisi�n y mostrando valores en notaci�n de punto fijo. */
    cout << setprecision(6) << fixed;

    /* Entradas */
    cout << "Ingresa la primera estimaci�n: ";
    cin >> x0;
    cout << "Ingresa la segunda estimaci�n: ";
    cin >> x1;
    cout << "Ingresa el error tolerable: ";
    cin >> e;

    /* Calculando el valor funcional */
    f0 = f(x0);
    f1 = f(x1);

    /* Verificando si las estimaciones iniciales encierran la ra�z o no. */
    if (f0 * f1 > 0.0) {
        cout << "Estimaciones iniciales incorrectas." << endl;
        return 1;
    }

    /* Implementando el m�todo de bisecci�n */
    cout << endl << "****************" << endl;
    cout << "M�todo de Bisecci�n" << endl;
    cout << "****************" << endl;

    do {
        /* Bisecci�n del intervalo */
        x = (x0 + x1) / 2;
        f = f(x);

        cout << "Iteraci�n-" << step << ": x = " << setw(10) << x << " y f(x) = " << setw(10) << f << endl;

        if (f0 * f < 0) {
            x1 = x;
        } else {
            x0 = x;
        }

        step++;
    } while (fabs(f) > e);

    cout << endl << "La ra�z es: " << x << endl;
    return 0;
}

