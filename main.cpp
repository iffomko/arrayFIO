#include <iostream>
#include "human.h"

int main() {
    int n;
    std::ifstream fin("C:\\arrayFIO\\input.txt");
    fin >> n;

    human* fio = new human[n];

    for (int i = 0; i < n; i++) // Заполняем
        fio[i].fill(fin);

    int key;
    std::cout << "Enter key: ";
    std::cin >> key;

    int* indexes = new int[n];
    int count = 0;

    for (int i = 0; i < n; i++) // Фильтруем
        if (fio[i].getFirstNumber() == key)
            indexes[count++] = i;

    for (int i = 0; i < count - 1; i++) // Сортировка
        for (int j = i + 1; j < count; j++)
            if (fio[indexes[i]].getSumma() < fio[indexes[j]].getSumma()) {
                human temp = fio[indexes[i]];
                fio[indexes[i]] = fio[indexes[j]];
                fio[indexes[j]] = temp;
            }

    for (int i = 0; i < count; i++)
        std::cout << fio[indexes[i]].getSurname() << " " << fio[indexes[i]].getName() << " " << fio[indexes[i]].getLastname() << std::endl;

    return 0;
}
