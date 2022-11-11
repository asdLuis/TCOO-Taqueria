#include <iostream>
#include <string>

using namespace std;

class Chesquito
{

private:
    string name;
    int amount;
    int price;
    int size;
    bool isCold;
    bool isOfCrystal;
    bool isLight;

public:
    Chesquito() {
        this->name = "Boing de Mango";
        this->amount = 1;
        this->price = 18;
        this->size = 500; // in ml
        this->isCold = true;
        this->isOfCrystal = true;
        this->isLight = false;
    }

    Chesquito(string name, int amount, int price, bool isCold, bool isOfCrystal, bool isLight) {
        this->name = name;
        this->amount = amount;
        this->price = price;
        this->size = 500;
        this->isCold = isCold;
        this->isOfCrystal = isOfCrystal;
        this->isLight = isLight;
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
    void setIsCold(bool isCold) {
        this->isCold = isCold;
    }
    void setIsOfCrystal(bool isOfCrystal) {
        this->isOfCrystal = isOfCrystal;
    }
    void setIsLight(bool isLight) {
        this->isLight = isLight;
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
    bool getIsCold() {
        return this->isCold;
    }
    bool getIsOfCrystal() {
        return this->isOfCrystal;
    }
    bool getIsLight() {
        return this->isLight;
    }
    void displayData() {
        cout << "Name: " << this->name << endl;
        cout << "Amount: " << this->amount << endl;
        cout << "Price: $" << this->price*amount << endl;
        cout << "Size: " << this->size << "mL" << endl;
        cout << "Is Cold: " << this->isCold << endl;
        cout << "Is of Crystal: " << this->isOfCrystal << endl;
        cout << "Is Light: " << this->isLight << endl;
    }
};