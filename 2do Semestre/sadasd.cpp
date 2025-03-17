#include <iostream>
#include <iomanip>
#include <cmath>

/* Definición de la función a resolver. Cambia esta función para resolver otro problema. */
#define f(x) x*x

using namespace std;

int main() {
    /* Declaración de variables requeridas */
    float x0, x1, x, f0, f1, f, e;
    int step = 1;

    /* Configurando la precisión y mostrando valores en notación de punto fijo. */
    cout << setprecision(6) << fixed;

    /* Entradas */
    cout << "Ingresa la primera estimación: ";
    cin >> x0;
    cout << "Ingresa la segunda estimación: ";
    cin >> x1;
    cout << "Ingresa el error tolerable: ";
    cin >> e;

    /* Calculando el valor funcional */
    f0 = f(x0);
    f1 = f(x1);

    /* Verificando si las estimaciones iniciales encierran la raíz o no. */
    if (f0 * f1 > 0.0) {
        cout << "Estimaciones iniciales incorrectas." << endl;
        return 1;
    }

    /* Implementando el método de bisección */
    cout << endl << "****************" << endl;
    cout << "Método de Bisección" << endl;
    cout << "****************" << endl;

    do {
        /* Bisección del intervalo */
        x = (x0 + x1) / 2;
        f = f(x);

        cout << "Iteración-" << step << ": x = " << setw(10) << x << " y f(x) = " << setw(10) << f << endl;

        if (f0 * f < 0) {
            x1 = x;
        } else {
            x0 = x;
        }

        step++;
    } while (fabs(f) > e);

    cout << endl << "La raíz es: " << x << endl;
    return 0;
}

