
#include "Gun.h"
#include <cstdlib>

double CommonSpear::hit(double armor) {
    //gun is weak against armor but is lethal in places without it
    
    srand(time(NULL));
    
    roll1 = rand() % 4 + 1; //range of 1 to 4
    roll2 = rand() % 4 + 1; //range of 1 to 4
    
    
    bodyLocation = roll1 + roll2;    //adds up to 8, lowest is 2
    
    double damage;
    
    
    /*
    This switch statement gives a
        1 in 7 chance to get a headshot,
        4 in 7 for body shot,
        2 in 7 chance for leg shot.
     If a headshot occurs, a lot of damage is done. high risk v reward
    */
    switch (bodyLocation) {
        case 2:             //The bullet hit the head
            damage = hitPoints; //hitPoints is 200 against no armor
            break;
        case 3:             //The Body
        case 4:
        case 5:
        case 6:
            damage = hitPoints - (armor * 3)    //armor is Tripled against the bullet
            break;
        case 7:             //The legs
        case 8:
            damage = hitPoints - (armor * 2)    //armor doubled against the legs
            break;
    }

    if (damage < 0) {
        return 0;
    }
    
    return damage;
}
