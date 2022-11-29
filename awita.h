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
    bool has_ice; // true - false

public:
    // Constructor
    Awita(){};
    Awita(std::string f, int s, bool hi) : flavour(f), size(s), has_ice(hi) {};

    // Setters
    void set_flavour(std::string );
    void set_size(int );
    void set_has_ice(bool );

    // Getters
    std::string get_flavour();
    int get_size();
    bool get_has_ice();

    std::string set_as_string();
};

// Method definitions

void Awita::set_flavour(std::string f) {
    flavour = f;
}
void Awita::set_size(int s) {
    size = s;
}
void Awita::set_has_ice(bool hi) {
    has_ice = hi;
}

std::string Awita::get_flavour() {
    return flavour;
}
int Awita::get_size() {
    return size;
}
bool Awita::get_has_ice() {
    return has_ice;
}
std::string Awita::set_as_string() {
    std::stringstream ss;
    ss << "Awita of " << flavour << ", " << size << " L, " << (has_ice ? "with" : "without") << " ice.";
    return ss.str();
}

#endif