
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
