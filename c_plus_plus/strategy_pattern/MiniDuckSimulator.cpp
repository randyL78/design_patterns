//
// Created by Randy Layne on 5/10/20.
//
#include <iostream>

#include "Duck.h"
#include "FlyWithWings.h"
#include "Quacker.h"
#include "Squeak.h"

using namespace std;
int main() {
    FlyBehavior *flier = new FlyWithWings();
    QuackBehavior *quack = new Quacker();
    QuackBehavior *squeak = new Squeak();

    Duck duck = Duck(flier, quack);
    cout << duck << endl;
    cout << duck.fly() << endl;
    cout << duck.quack() << endl;

    duck.setQuackBehavior(squeak);
    cout << duck.quack() << endl;


    return 0;
}
