//
//  weapon.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef weapon_hpp
#define weapon_hpp

#include <stdio.h>
#include <string>

enum WeaponType { One_Hand, Two_Hands };

class Weapon
{
private:
    
    std::string name = "";  // weapon name
    
    int duration = 100; // length of lifetime
    int duration_factor = 1;    // define the factory of duration time
    
    WeaponType w_type;  // define the type of weapon
    
public:
    Weapon(std::string);
    Weapon(const Weapon&);
    ~Weapon();
    
    Weapon& operator=(const Weapon&);
    
    // methods
    void SetName(std::string);
    void SetDuration(int);
    void SetDurationFactor(int);
    void SetType(WeaponType);
};

#endif /* weapon_hpp */
