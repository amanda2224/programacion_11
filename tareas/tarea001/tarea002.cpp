#include <iostream>
#include <cctype>  // para la funcion toupper() la cual convierte las minusculas en mayusculas de lo q ingrese el individuo

int main() {
    const double precio_bas = 100.0;
    int edad;
    char tipoBoleto;
    double precio_fin;
    // variables y sus definiciones resspectivas


    // para ingresar la edad
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    
    // menu de boletos
    std::cout << "Seleccione el tipo de boleto:\n";

    std::cout << "(N) Normal\n";

    std::cout << "(E) Estudiante (50% de descuento)\n";

    std::cout << "(S) Senior (30% de descuento para mayores de 60 años)\n";

    std::cout << "Ingrese la opción de boleto (N/E/S): ";
    std::cin >> tipoBoleto;
    
    tipoBoleto = toupper(tipoBoleto); 
    
    // precio de los boletos segun las edades
    if (edad < 5) {
        precio_fin = 0.0;
    } else if (tipoBoleto == 'E') {
        precio_fin = precio_bas * 0.5;
    } else if (tipoBoleto == 'S' && edad > 60) {
        precio_fin = precio_bas * 0.7;
    } else {
        precio_fin = precio_bas;
    }
    
    // resultado de la compra de los boletoss
    std::cout << "El precio final de su boleto es: $" << precio_fin << std::endl;

    return 0;
}
