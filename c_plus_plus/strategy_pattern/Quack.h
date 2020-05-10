//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_QUACK_H
#define STRATEGY_PATTERN_QUACK_H


#include "QuackBehavior.h"

class Quack: public QuackBehavior {
public:
    std::string quack() override;
};


#endif //STRATEGY_PATTERN_QUACK_H
