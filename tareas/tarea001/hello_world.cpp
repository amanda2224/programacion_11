#include <iostream>

int main() {

    int num1, num2;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    int sum = num1 + num2;
    int multi = num1 * num2;

    std::cout << "La sum de los numeros es: " << sum << std::endl;
    std::cout << "La multi de los numeros es: " << multi << std::endl;

    return 0;
}
