#include <string>
#include <sstream>
#include "articulo.h"
#ifndef CEBOLLA_H
#define CEBOLLA_H

class Cebollitas : public Articulo
{

private:
    bool crunchy; // true - false
    int size; // 1-2-3

public:
    Cebollitas(){};
    Cebollitas(bool c, int s) : crunchy(c), size(s) {};

    // Setters
    void set_crunchy(bool );
    void set_size(int );
    
    // Getters
    bool get_crunchy();
    int get_size();

    std::string set_as_string();
};

// Method definitions

void Cebollitas::set_crunchy(bool c) {
    this->crunchy = c;
}
void Cebollitas::set_size(int s) {
    this->size = s;
}

bool Cebollitas::get_crunchy() {
    return crunchy;
}
int Cebollitas::get_size() {
    return size;
}

std::string Cebollitas::set_as_string() {
    std::stringstream ss;
    ss << "Cebollitas, " << size << " oz, and are " << (crunchy ? "crunchy" : "not crunchy") << ".";
    return ss.str();
}

#endif