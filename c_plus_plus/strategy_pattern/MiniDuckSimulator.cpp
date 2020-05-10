//
// Created by Randy Layne on 5/10/20.
//
#include <iostream>

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quacker.h"
#include "Squeak.h"
#include "FlyRocketPowered.h"

using namespace std;
int main() {
    FlyBehavior *flier = new FlyWithWings();
    QuackBehavior *quack = new Quacker();
    QuackBehavior *squeak = new Squeak();
    FlyBehavior *rocket = new FlyRocketPowered();

    Duck duck = Duck(flier, quack);
    cout << duck << endl;
    cout << duck.fly() << endl;
    cout << duck.quack() << endl;
    duck.setFlyBehavior(rocket);
    duck.setQuackBehavior(squeak);
    cout << duck.fly() << endl;
    cout << duck.quack() << endl;


    return 0;
}
