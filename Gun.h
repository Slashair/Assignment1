#include <string>
#include "Weapon.h"

#ifndef GUN_H
#define GUN_H

class Gun : public Weapon {
public:

    Gun(): Weapon("Gun", 200.0) {
        //names the weapon "gun"
        //Gun does more damage depending on where it hits on the body
    }

    virtual ~Gun() {};

    virtual double hit(double armor);

};

#endif

