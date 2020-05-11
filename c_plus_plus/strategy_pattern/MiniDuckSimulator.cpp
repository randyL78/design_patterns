// Created by Randy Layne on 5/10/20.
//
#include "Squeak.h"
//

#include <iostream>
#include "Duck.h"
#include "FlyRocketPowered.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "ModelDuck.h"

using namespace std;
int main() {
    FlyBehavior *rocket = new FlyRocketPowered();

    Duck *ducks[3];

    ducks[0] = new MallardDuck();
    ducks[1] = new ModelDuck();
    ducks[2] = new RubberDuck();


    for (Duck *duck : ducks)
    {
        cout << *duck << endl;
        cout << duck->fly() << endl;
        cout << duck->quack() << endl << endl;
    }


    cout << "Poor rubber ducky can't fly. Let's change this behaviour by strapping on a rocket!\n";
    Duck *duck = ducks[2];

    FlyBehavior *f = new FlyRocketPowered();
    duck->setFlyBehavior(f);

    cout  << *duck << endl;
    cout << duck->fly() << endl;


    return 0;
}
