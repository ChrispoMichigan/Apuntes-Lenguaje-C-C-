#include <iostream>

// Declaración de una función que toma un puntero a función como argumento
void funcionB(void (*otraFuncion)()) {
    std::cout << "Dentro de funcionB" << std::endl;
    // Llamar a la función pasada como argumento
    otraFuncion();
}

// Función que queremos pasar como argumento
void miFuncion() {
    std::cout << "¡Hola desde miFuncion!" << std::endl;
}

// Función principal
int main() {
    // Llamar a funcionB y pasar miFuncion como argumento
    funcionB(miFuncion);

    return 0;
}

