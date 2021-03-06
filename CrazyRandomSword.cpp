
#include "CrazyRandomSword.h"
#include <cstdlib>
#include <cmath>

double CrazyRandomSword::hit(double armor) {
    //making the hitpoints here so it is random everytime the sword hits
    //rather than every time the sword is created
    srand(time(NULL));
    
    int hitpoints = (rand() % (101 - 7)) + 7;
    
    workingArmor = (rand() % (armor * 0.666)) + 2
    
    if (workingArmor > (armor * 0.666)) {
        workingArmor = armor * 0.666;
    }
    
    double damage = hitpoints - workingArmor;
    
    if (damage < 0) {
        return 0;
    }
    return floor(damage);
}
