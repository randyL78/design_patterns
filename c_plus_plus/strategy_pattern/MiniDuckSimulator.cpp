//
// Created by Randy Layne on 5/10/20.
//
#include <iostream>

#include "Duck.h"

using namespace std;
int main() {

    Duck duck = Duck();
    cout << duck << endl;
    cout << duck.fly() << endl;
    cout << duck.quack() << endl;

    return 0;
}
