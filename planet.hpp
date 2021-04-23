#ifndef PLANET_HPP
#define PLANET_HPP

#include <string>

using std::string;

class Planet {
    public:
        Planet(string name, unsigned position);
        void printDetails();

    private:
        string name;
        unsigned position;

};

#endif