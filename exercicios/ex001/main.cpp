#include <iostream>
#include <cmath>

int calcularQuadrados(int dobras) {
    if (dobras <= 0) {
        return 0;
    }else{
        return pow(2, dobras);
    }
}

int main() {
    int numDobras;

    std::cout << "Digite o n�mero de dobras na folha de papel: ";
    std::cin >> numDobras;

    int numQuadrados = calcularQuadrados(numDobras);
    std::cout << "A quantidade de quadrados formados �: " << numQuadrados << std::endl;

    return 0;
}
