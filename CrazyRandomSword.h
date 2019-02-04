
#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

        //The hitpoints in the weapon function is arbitrary, going to overwrite in .cpp
    CrazyRandomSword(): Weapon("Crazy Random Sword", 40.0) {
    }; //calls Weapon function in .cpp file

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif

