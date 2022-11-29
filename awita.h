#include <string>
#include <sstream>
#include "articulo.h"
#ifndef AWITA_H
#define AWITA_H

class Awita : public Articulo
{

private:
    std::string flavour; // name
    int size; // 1-2-3
    bool hasIce; // true - false

public:
    // Constructor
    Awita(){};
    Awita(std::string f, int s, bool hi) : flavour(f), size(s), hasIce(hi) {};

    // Setters
    void set_flavour(std::string );
    void set_size(int );
    void set_hasIce(bool );

    // Getters
    std::string get_flavour();
    int get_size();
    bool get_hasIce();

    std::string set_as_string();
};

// Method definitions

void Awita::set_flavour(std::string f) {
    flavour = f;
}
void Awita::set_size(int s) {
    size = s;
}
void Awita::set_hasIce(bool hi) {
    hasIce = hi;
}

std::string Awita::get_flavour() {
    return flavour;
}
int Awita::get_size() {
    return size;
}
bool Awita::get_hasIce() {
    return hasIce;
}
std::string Awita::set_as_string() {
    std::stringstream ss;
    ss << "Awita of " << flavour << ", " << size << " L, " << (hasIce ? "with" : "without") << " ice.";
    return ss.str();
}

#endif