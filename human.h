//
// Created by Iluha on 29.06.2022.
//

#pragma once
#ifndef ARRAYFIO_HUMAN_H
#define ARRAYFIO_HUMAN_H

#include <iostream>
#include <fstream>

class human {
    std::string name;
    std::string surname;
    std::string lastname;
    int number;
    int summa;
public:
    human();

    void fill(std::ifstream &fin);
    int getFirstNumber();

    std::string getName();
    std::string getSurname();
    std::string getLastname();
    int getNumber();
    int getSumma();
};

#endif //ARRAYFIO_HUMAN_H
