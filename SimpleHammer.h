/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

class SimpleHammer: public Weapon {
    
public:
    SimpleHammer(): Weapon("Simple Hammer", 25.0) {
        //calls Weapon function from inherited class
    }
    
    virtual ~SimpleHammer() {};
    
    virtual double hit(double armor);
    
};

#endif
