/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "CrazyRandomSword.h"
#include "SimpleHammer.h"
#include "Gun.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
    
    if (name.compare("hammer") == 0) {
        return new SimpleHammer();
    }
    
    if (name.compare("crazy") == 0) {
        return new CrazyRandomSword();
    }
    if (name.compare("gun") == 0) {
        return new Gun();
    }
    

    throw "Invalid weapon";
}
