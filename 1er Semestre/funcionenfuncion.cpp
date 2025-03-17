#include <iostream>

// Declaraci�n de una funci�n que toma un puntero a funci�n como argumento
void funcionB(void (*otraFuncion)()) {
    std::cout << "Dentro de funcionB" << std::endl;
    // Llamar a la funci�n pasada como argumento
    otraFuncion();
}

// Funci�n que queremos pasar como argumento
void miFuncion() {
    std::cout << "�Hola desde miFuncion!" << std::endl;
}

// Funci�n principal
int main() {
    // Llamar a funcionB y pasar miFuncion como argumento
    funcionB(miFuncion);

    return 0;
}

