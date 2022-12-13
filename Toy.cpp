#include "Toy.h"
#include <vector>

std::string Toy::toString() {
    std::string result;

    result.append(this->name);

    if (this->price > 0) {
        result.append("; Price is " + std::to_string(this->price));
    } else {
        result.append("; Price is undefined");
    }

    if (this->maximumAge) {
        result.append("; Age of use in between " + std::to_string(this->minimumAge) + " and " + std::to_string(this->maximumAge) + ".");
    } else if (this->minimumAge) {
        result.append("; Can be used from " + std::to_string(this->minimumAge) + " years old.");
    } else {
        result.append("; Has no age restrictions.");
    }

    return result;
}

Toy findMostExpensivToy(const std::vector <Toy>& toys) {
    Toy result;

    for (const auto& toy : toys) {
        if (toy.getPrice() > result.getPrice()) {
            result = toy;
        }
    }

    return result;
}

std::vector <Toy> findAgeAppropriateToys(const std::vector <Toy>& toys, const int& age) {
    std::vector <Toy> result;

    for (const auto& toy : toys) {
        if (!toy.getMinimumAge()) {
            result.emplace_back(toy);
        } else if (!toy.getMaximumAge() && age >= toy.getMinimumAge()) {
            result.emplace_back(toy);
        } else if (age >= toy.getMinimumAge() && age <= toy.getMaximumAge()) {
            result.emplace_back(toy);
        }
    }

    return result;
}