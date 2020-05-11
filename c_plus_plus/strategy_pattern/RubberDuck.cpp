//
// Created by Randy Layne on 5/10/20.
//

#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

RubberDuck::RubberDuck() {
    FlyBehavior *f = new FlyNoWay();
    QuackBehavior *q = new Squeak;

    setFlyBehavior(f);
    setQuackBehavior(q);
}

void RubberDuck::display(std::ostream &outs) const {
    outs << "I'm a rubber ducky";
}
