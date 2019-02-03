/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"

#ifndef COMMONSPEAR_H
#define COMMONSPEAR_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:

        //The hitpoints in the weapon function is arbitrary, going to overwrite in .cpp
    CrazyRandomSword(): Weapon("Crazy Random Sword", 40.0); //calls Weapon function in .cpp file

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* COMMONSPEAR_H */

