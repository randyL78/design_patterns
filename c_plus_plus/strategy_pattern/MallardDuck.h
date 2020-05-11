//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_MALLARDDUCK_H
#define STRATEGY_PATTERN_MALLARDDUCK_H


#include "Duck.h"

class MallardDuck : public Duck {
public:
    MallardDuck();

    void display(std::ostream &outs) const override;
};


#endif //STRATEGY_PATTERN_MALLARDDUCK_H
