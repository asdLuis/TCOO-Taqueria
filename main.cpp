#include <iostream>
#include <string>
#include "taco.h"
#include "awita.h"
#include "cebollitas.h"
#include "cuenta.h"

// using namespace std
using namespace std;

int main()
{
    Cuenta cuenta;
    cuenta.add_taco(true, false, true, false, true, 0);
    cuenta.add_taco(false, false, true, false, false, 1);
    cuenta.add_taco(true, false, false, false, true, 2);
    cuenta.add_taco(false, false, true, false, false, 3);
    cuenta.set_price_taco(12.5, 0); // 12.5 peso
    cuenta.add_cebollitas(false, 2, 0);
    cuenta.add_cebollitas(true, 1, 1);
    cuenta.add_cebollitas(true, 2, 2);
    cuenta.add_cebollitas(false, 3, 3);
    cuenta.set_price_cebollitas(30.0, 0);   // 100 peso
    cuenta.add_awita("Mango", 1, false, 0); // 2 awitas de mango sin hielo de 1L
    cuenta.add_awita("Horchata", 5, false, 1);
    cuenta.add_awita("Limon", 3, false, 2);
    cuenta.add_awita("Fresa", 2, false, 3);
    cuenta.set_price_awita(40.0, 0); // 40 peso
    std::cout << cuenta.print_data() << std::endl;
    return 0;
}
