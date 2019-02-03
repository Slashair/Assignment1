/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

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
