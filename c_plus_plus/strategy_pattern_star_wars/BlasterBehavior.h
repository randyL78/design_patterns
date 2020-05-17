//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_STAR_WARS_BLASTERBEHAVIOR_H
#define STRATEGY_PATTERN_STAR_WARS_BLASTERBEHAVIOR_H

#include "WeaponBehavior.h"

class BlasterBehavior : public WeaponBehavior {
public:
    BlasterBehavior() {};
    ~BlasterBehavior() {};

    virtual void useWeapon() override ;
};


#endif //STRATEGY_PATTERN_STAR_WARS_BLASTERBEHAVIOR_H
