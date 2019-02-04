
/* 
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include "Weapon.h"
#include "WeaponFactory.h"
/*
#include "CommonSpear.h"
#include "CommonSword.h"
#include "CrazyRandomSword.h"
#include "Gun.h"
*/

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by 
 * printing its damage on standard output. 
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl << std::endl;
}

/*
 * 
 */
int main(int argc, char** argv) {

    double armor = 29;

    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("crazy");
    simulateWeapon(weapon, armor);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("gun");
    simulateWeapon(weapon, armor);
    delete(weapon);
    
    weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor);
    delete(weapon);
    
    

    return 0;
}

/*
void simulateWeapon(Weapon * weapon, double armor) {
    cout << weapon.getName() << ": " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "Damage done:" << weapon.hit(arm);
        if(i < 9)
            cout << " | ";
    }
 
}
*/
