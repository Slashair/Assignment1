
#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage
    
    if(armor < 30) {
        damage = hitPoints;
    }
    else {
        damage = hitPoints - (armor * 0.8);
        if (damage < 0) {
            return 0;
        }
    }

    
    return damage;
}
