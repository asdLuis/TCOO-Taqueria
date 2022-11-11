#include <iostream>
#include <string>

using namespace std;

class Taco
{

private:
    string typeOfTaco;
    bool isCampechano;
    int amount;
    int price;
    bool hasDoubleTortilla;
    bool hasPineapple;
    bool hasSalsa;
    bool hasCilantro;
    bool hasCebolla;

public:
    Taco() {
        this->typeOfTaco = "Al Pastor";
        this->price = 15;
        this->isCampechano = false; 
        this->amount = 1;
        this->hasDoubleTortilla = true;
        this->hasPineapple = true;
        this->hasSalsa = true;
        this->hasCilantro = true;
        this->hasCebolla = true;
    }

    Taco(string typeOfTaco, int price, bool isCampechano, int amount, bool hasDoubleTortilla,
        bool hasPineapple, bool hasSalsa, bool hasCilantro, bool hasCebolla) {
        this->typeOfTaco = typeOfTaco;
        this->price = price;
        this->isCampechano = isCampechano;
        this->amount = amount;
        this->hasDoubleTortilla = hasDoubleTortilla;
        this->hasPineapple = hasPineapple;
        this->hasSalsa = hasSalsa;
        this->hasCilantro = hasCilantro;
        this->hasCebolla = hasCebolla;
    }

    // Setters
    void setTypeOfTaco(string typeOfTaco) {
        this->typeOfTaco = typeOfTaco;
    }
    void setIsCampechano(bool isCampechano) {
        this->isCampechano = isCampechano;
    }
    void setAmount(int amount) {
        this->amount = amount;
    }
    void setHasDoubleTortilla(bool hasDoubleTortilla) {
        this->hasDoubleTortilla = hasDoubleTortilla;
    }
    void setHasPineapple(bool hasPineapple) {
        this->hasPineapple = hasPineapple;
    }
    void setHasSalsa(bool hasSalsa) {
        this->hasSalsa = hasSalsa;
    }
    void setHasCilantro(bool hasCilantro) {
        this->hasCilantro = hasCilantro;
    }
    void setHasCebolla(bool hasCebolla) {
        this->hasCebolla = hasCebolla;
    }

    // Getters
    string getTypeOfTaco() {
        return this->typeOfTaco;
    }
    bool getIsCampechano() {
        return this->isCampechano;
    }
    int getAmount() {
        return this->amount;
    }
    bool getHasDoubleTortilla() {
        return this->hasDoubleTortilla;
    }
    bool getHasPineapple() {
        return this->hasPineapple;
    }
    bool getHasSalsa() {
        return this->hasSalsa;
    }
    bool getHasCilantro() {
        return this->hasCilantro;
    }
    bool getHasCebolla() {
        return this->hasCebolla;
    }
    void displayData() {
        cout << "Type of taco: " << this->typeOfTaco << endl;
        cout << "Price: $" << this->price*amount << endl;
        cout << "Is Campechano: " << this->isCampechano << endl;
        cout << "Amount: " << this->amount << endl;
        cout << "Has double tortilla: " << this->hasDoubleTortilla << endl;
        cout << "Has pineapple: " << this->hasPineapple << endl;
        cout << "Has salsa: " << this->hasSalsa << endl;
        cout << "Has cilantro: " << this->hasCilantro << endl;
        cout << "Has cebolla: " << this->hasCebolla << endl;
    }
};