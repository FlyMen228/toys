#include <iostream>
#include <vector>
#include "Toy.h"

int main() {
    Toy toy1("Baba", 212.55, 15, 5);
    Toy toy2("pig", 124124.213);
    Toy toy3("doggy");
    Toy toy4; //Это конструктор по-умолчанию, скобки писать не надо. Иначе воспринимает как функцию
    Toy toy5("Cock", 15, 3);

    std::vector <Toy> toys = {toy1, toy2, toy3, toy4, toy5};

    //std::cout << findMostExpensivToy(toys).toString();

    auto appropriateToys = findAgeAppropriateToys(toys, 3);

    for (auto& elem : appropriateToys) {
        std::cout << elem.toString() << std::endl;
    }
}
