//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_MODELDUCK_H
#define STRATEGY_PATTERN_MODELDUCK_H


#include "Duck.h"

class ModelDuck : public Duck {
public:
    ModelDuck();

    void display(std::ostream &outs) const override;
};


#endif //STRATEGY_PATTERN_MODELDUCK_H
