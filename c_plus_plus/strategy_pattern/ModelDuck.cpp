//
// Created by Randy Layne on 5/10/20.
//

#include "ModelDuck.h"
#include "FlyRocketPowered.h"
#include "MuteQuack.h"

ModelDuck::ModelDuck() {
    FlyBehavior *f = new FlyRocketPowered();
    QuackBehavior *q = new MuteQuack();

    setFlyBehavior(f);
    setQuackBehavior(q);
}

void ModelDuck::display(std::ostream &outs) const {
    outs << "I'm a model of a duck";
}
