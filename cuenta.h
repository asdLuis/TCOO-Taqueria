#include <string>
#include <sstream>
#include "awita.h"
#include "cebollitas.h"
#include "taco.h"
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta 
{
private:
    Taco taco[4];
    Cebollitas cebollitas[4];
    Awita awita[4];

public:
    // Constructor
    Cuenta(){};

    void add_taco(bool, bool, bool, bool, bool, int);
    void add_cebollitas(bool, int, int);
    void add_awita(std::string, int, bool, int);

    void set_price_taco(float, int);
    void set_price_cebollitas(float, int);
    void set_price_awita(float, int);

    std::string print_data();
};

// Method definitions

void Cuenta::add_taco(bool c, bool p, bool s, bool t, bool a, int i) {
    taco[i] = Taco(c, p, s, t, a);
}

void Cuenta::add_cebollitas(bool c, int s, int i) {
    cebollitas[i] = Cebollitas(c, s);
}

void Cuenta::add_awita(std::string f, int s, bool hi, int i) {
    awita[i] = Awita(f, s, hi);
}

void Cuenta::set_price_taco(float p, int pos) {
    taco[pos].set_price(p);
}
void Cuenta::set_price_cebollitas(float p, int pos) {
    cebollitas[pos].set_price(p);
}
void Cuenta::set_price_awita(float p, int pos) {
    awita[pos].set_price(p);
}

std::string Cuenta::print_data() {
    float total = 0;
    for (int j = 0; j < 4; j++) {
        total += taco[j].get_price();
        total += awita[j].get_price();
        total += cebollitas[j].get_price();
    }

    std::stringstream ss;

    // Print the information
    for(int k = 0; k < 4; k++) {
        ss << taco[k].set_as_string() << std::endl;
    }
    for(int k = 0; k < 4; k++) {
        ss << awita[k].set_as_string() << std::endl;
    }
    for(int k = 0; k < 4; k++) {
        ss << cebollitas[k].set_as_string() << std::endl;
    }

    ss << "Total: $" << total << std::endl;

    return ss.str();
}

#endif