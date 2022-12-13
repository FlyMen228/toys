#ifndef TOYS_TOY_H
#define TOYS_TOY_H

#include <string>
#include <utility>
#include <vector>

struct Toy {

private:

    std::string name;

    double price = 0;

    int minimumAge = 0;

    int maximumAge = 0;

public:

    Toy() : name("foo") {}

    Toy(std::string name) : name(std::move(name)) {}

    Toy(std::string name, double price) : name(std::move(name)), price(price) {}

    Toy(std::string name, double price, int min) : name(std::move(name)), price(price), minimumAge(min) {}

    Toy(std::string name, double price, int min, int max) : name(std::move(name)), price(price), minimumAge(std::min(min, max)), maximumAge(std::max(min, max)) {}

    std::string toString();

    std::string & getName() { return name; }

    void setName(const std::string& newName) { name = newName; }

    double getPrice() const { return price; }

    void setPrice(const double & newPrice) { price = newPrice; }

    int getMinimumAge() const { return minimumAge; }

    void setMinimumAge(const int& newMin) { minimumAge = newMin; }

    int getMaximumAge() const { return maximumAge; }

    void setMaximumAge(const int& newMax) { maximumAge = newMax; }

};

Toy findMostExpensivToy(const std::vector <Toy>& toys);

std::vector <Toy> findAgeAppropriateToys(const std::vector <Toy>& toys, const int& age);

#endif //TOYS_TOY_H