//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_SQUEAK_H
#define STRATEGY_PATTERN_SQUEAK_H


#include "QuackBehavior.h"

class Squeak: public QuackBehavior {
public:
    Squeak() {};
    std::string quack() override;
};


#endif //STRATEGY_PATTERN_SQUEAK_H
