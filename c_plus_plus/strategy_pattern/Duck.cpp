//
// Created by Randy Layne on 5/10/20.
//

#include "Duck.h"

Duck::Duck() {}

void Duck::display(std::ostream &outs) const {
    outs << "I'm a generic duck.";
}

std::string Duck::fly() {
    return "I'm flying!";
}

std::string Duck::quack() {
    return "Quack quack!";
}

std::ostream &operator<<(std::ostream &outs, const Duck &duck) {
    duck.display(outs);
    return outs;
}