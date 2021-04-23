#include "planet.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Planet::Planet(string name, unsigned position) {
    this->name = name;
    this->position = position;
}

void Planet::printDetails() {
    cout << "Name: " << this->name << endl;
    cout << "Position: " << std::to_string(this->position) << endl;
}