#include <string>
#ifndef ARTICULO_H
#define ARTICULO_H

class Articulo 
{
protected:
    float price; // $0.00
    float discount; // 1.0 - 100%

public:
    // Constructor

    Articulo(): price(0), discount(0) {}
    Articulo(float price, float discount): price(price), discount(discount) {}

    // Getters

    float get_price();
    float get_discount();

    // Setters
    
    void set_price(float );
    void set_discount(float );
};

// Method definitions

float Articulo::get_price() {
    return price;
}

float Articulo::get_discount() {
    return discount;
}

void Articulo::set_price(float price) {
    this->price = price;
    price -= price * discount;
}

#endif

