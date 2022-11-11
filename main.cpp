#include <iostream>
#include <string>

// Import our classes
#include "taco.h"
#include "chesquito.h"
#include "awita.h"

// using namespace std
using namespace std;

int main() {
    Chesquito Coca("Coca-Cola", 1, 15, true, true, false);
    Coca.displayData();
    Awita aguaDeLimon("Agua de Limon", 1, 20, 1000, false);
    aguaDeLimon.displayData();
    Taco Pastor("Taco de Pastor", 15, false, 3, true, true, true, true, true);
    Pastor.displayData();
    Taco Asada("Taco de Asada", 18, false, 5, true, true, true, true, true);
    Asada.displayData();
    Taco Suaperro("Taco de Suaperro", 2, false, 5, true, true, true, true, true);
    Suaperro.displayData();
    return 0;
}

