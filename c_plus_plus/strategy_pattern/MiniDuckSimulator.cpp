//
// Created by Randy Layne on 5/10/20.
//
#include <iostream>

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include "Squeak.h"

using namespace std;
int main() {
    FlyWithWings flier = FlyWithWings();
    Quack quack = Quack();
    Squeak squeak = Squeak();
    Duck duck = Duck(flier, squeak);
    duck.setFlyBehavior(flier);
    cout << duck << endl;
    cout << duck.fly() << endl;
    cout << duck.quack() << endl;
    duck.setQuackBehavior(quack);

    return 0;
}
