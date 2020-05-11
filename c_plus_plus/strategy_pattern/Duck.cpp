//
// Created by Randy Layne on 5/10/20.
//

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quacker.h"

Duck::Duck() {
    FlyBehavior *f = new FlyWithWings();
    QuackBehavior *q = new Quacker();
    this->flyBehavior = f;
    this->quackBehavior = q;
}

Duck::Duck(FlyBehavior *flyBehavior, QuackBehavior *quackBehavior)
    : flyBehavior(flyBehavior), quackBehavior(quackBehavior) {
}


void Duck::display(std::ostream &outs) const {
    outs << "I'm a generic duck.";
}

std::string Duck::fly() {
    return flyBehavior->fly();
}

std::string Duck::quack() {
    return quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior *flyBehavior) {
    this->flyBehavior = flyBehavior;
}

void Duck::setQuackBehavior(QuackBehavior *quackBehavior) {
    this->quackBehavior = quackBehavior;
}

std::ostream &operator<<(std::ostream &outs, const Duck &duck) {
    duck.display(outs);
    return outs;
}
