//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H


#include <ostream>

class Duck {
public:
    Duck();
    void display(std::ostream &outs) const;
};

std::ostream& operator<<(std::ostream& outs, const Duck& duck);

#endif //STRATEGY_PATTERN_DUCK_H
