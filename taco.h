#include <string>
#include <sstream>
#include "articulo.h"
#ifndef TACO_H
#define TACO_H

class Taco : public Articulo
{

private:

    bool has_double_tortilla;
    bool has_pineapple;
    bool has_salsa;
    bool has_cilantro;
    bool has_cebolla;

public:

    // Constructor

    Taco(){};
    Taco(bool hdt, bool hp, bool hs, bool hc, bool hca) : has_double_tortilla(hdt), has_pineapple(hp), has_salsa(hs), has_cilantro(hc), has_cebolla(hca) {};

    // Setters

    void set_has_double_tortilla(bool );
    void set_has_pineapple(bool );
    void set_has_salsa(bool );
    void set_has_cilantro(bool );
    void set_has_cebolla(bool );

    // Getters

    bool get_has_double_tortilla();
    bool get_has_pineapple();
    bool get_has_salsa();
    bool get_has_cilantro();
    bool get_has_cebolla();

    std::string set_as_string();
};

// Method definitions

void Taco::set_has_double_tortilla(bool hdt) {
    this->has_double_tortilla = hdt;
}
void Taco::set_has_pineapple(bool hp) {
    this->has_pineapple = hp;
}
void Taco::set_has_salsa(bool hs) {
    this->has_salsa = hs;
}
void Taco::set_has_cilantro(bool hc) {
    this->has_cilantro = hc;
}
void Taco::set_has_cebolla(bool hca) {
    this->has_cebolla = hca;
}

bool Taco::get_has_double_tortilla() {
    return has_double_tortilla;
}
bool Taco::get_has_pineapple() {
    return has_pineapple;
}
bool Taco::get_has_salsa() {
    return has_salsa;
}
bool Taco::get_has_cilantro() {
    return has_cilantro;
}
bool Taco::get_has_cebolla() {
    return has_cebolla;
}

std::string Taco::set_as_string() {
    std::stringstream ss;
    ss << "Taco with " << (has_double_tortilla ? "doble tortilla" : "one tortilla") << ", " << (has_pineapple ? "" : "no ") << "pineapple" << ", " << (has_salsa ? "salsa" : "no salsa") << ", " << (has_cilantro ? "cilantro" : "no cilantro") << ", " << (has_cebolla ? "" : "no ") << "cebolla.";
    return ss.str();
}

#endif