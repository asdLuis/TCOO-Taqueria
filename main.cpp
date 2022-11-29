#include <iostream>
#include <string>
#include "taco.h"
#include "awita.h"
#include "cebollitas.h"
#include "cuenta.h"

// using namespace std
using namespace std;

int main() {
    Cuenta cuenta;
    cuenta.add_taco(true, false, true, false, true, 0); // 10 tacos para Luis
    cuenta.set_price_taco(210, 0.5); // 210 pesos total, 50% de descuento
    cuenta.add_cebollitas(false, 2, 0); // 1 orden de cebollitas no crujientes de 2 oz
    cuenta.set_price_cebollitas(100, 0.25); // 100 pesos total, 25% de descuento
    cuenta.add_awita("Mango", 1, false, 0); // 2 awitas de mango sin hielo de 1L
    cuenta.set_price_awita(40, 0); // 40 pesos total, 0% de descuento
    std::cout << cuenta.print_data() << std::endl;
    return 0;
}

