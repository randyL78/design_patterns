//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_RUBBERDUCK_H
#define STRATEGY_PATTERN_RUBBERDUCK_H

#include "Duck.h"

class RubberDuck : public Duck {
public:
    RubberDuck();

    void display(std::ostream &outs) const override;
};


#endif //STRATEGY_PATTERN_RUBBERDUCK_H
