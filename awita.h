#include <iostream>
#include <string>

using namespace std;

class Awita 
{

private:
    string name;
    int amount;
    int price;
    int size; // in ml
    bool hasIce;

public:
    Awita() {
        this->name = "Agua de Horchata";
        this->amount = 1;
        this->price = 20;
        this->size = 500; // in ml
        this->hasIce = true;
    }

    Awita(string name, int amount, int price, int size, bool hasIce) {
        this->name = name;
        this->amount = amount;
        this->price = price;
        this->size = size; // in mL
        this->hasIce = hasIce;
    }

    // Setters
    void setName(string name) {
        this->name = name;
    }
    void setAmount(int amount) {
        this->amount = amount;
    }
    void setPrice(int price) {
        this->price = price;
    }
    void setSize(int size) {
        this->size = size;
    }
    void setHasIce(bool hasIce) {
        this->hasIce = hasIce;
    }


    // Getters
    string getName() {
        return this->name;
    }
    int getAmount() {
        return this->amount;
    }
    int getPrice() {
        return this->price;
    }
    int getSize() {
        return this->size;
    }
    bool getHasIce() {
        return this->hasIce;
    }
    void displayData() {
        cout << "Name: " << this->name << endl;
        cout << "Amount: " << this->amount << endl;
        cout << "Price: $" << this->price*amount << endl;
        cout << "Size: " << this->size << "mL" << endl;
        cout << "Has Ice: " << this->hasIce << endl;
    }
};