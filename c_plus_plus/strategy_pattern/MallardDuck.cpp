//
// Created by Randy Layne on 5/10/20.
//

#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quacker.h"

MallardDuck::MallardDuck()
{
    // same as default duck, but want to make a point.
    // plus, if the default changes we are covered
    FlyBehavior *f = new FlyWithWings();
    QuackBehavior *q = new Quacker();

    setFlyBehavior(f);
    setQuackBehavior(q);
}


void MallardDuck::display(std::ostream &outs) const {
    outs << "I'm a real Mallard Duck.";
}
