//
// Created by Iluha on 29.06.2022.
//

#include "human.h"

human::human() {
    this->summa = 0;
    this->number = 0;
}

void human::fill(std::ifstream &fin) {
    if (!fin) {
        std::cout << "Failed!\n";
    } else {
        fin >> this->surname >> this->name >> this->lastname >> this->number >> this->summa;
    }
}

std::string human::getName() {
    return this->name;
}

std::string human::getLastname() {
    return this->lastname;
}

std::string human::getSurname() {
    return this->surname;
}

int human::getNumber() {
    return this->number;
}

int human::getSumma() {
    return this->summa;
}

int human::getFirstNumber() {
    int x = this->number;
    int lastNum;

    while (x != 0) {
        lastNum = x % 10;
        x /= 10;
    }

    return lastNum;
}