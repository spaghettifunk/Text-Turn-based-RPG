//
//  ch_class.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef ch_class_hpp
#define ch_class_hpp

#include <stdio.h>

class Ch_Class
{
protected:
    
    int stamina = 10;        // increase the HP
    int strength = 10;       // have influence on the attack damage
    int agility = 10;        // influence on the speed of attack (either spell or sword)
    int intelligence = 10;   // increase the Mana
    
    // factors subject to change based on class
    int xp_gain_factor = 5;
    int stamina_factor = 5;
    int strength_factor = 5;
    int agility_factor = 5;
    int intelligence_factor = 5;
    
public:
    
    Ch_Class(int, int, int, int);       // in this order: stamina, strength, agility, intelligence
    virtual ~Ch_Class();
    
    // getter
    int GetStamina() { return stamina; }
    int GetStrength() { return strength; }
    int GetAgility() { return agility; }
    int GetItenlligence() { return intelligence; }
    
    // factor getters
    int GetXpGainFactor() { return xp_gain_factor; }
    int GetStaminaFactor() { return stamina_factor; }
    int GetStrengthFactor() { return strength_factor; }
    int GetAgilityFactor() { return agility_factor; }
    int GetIntelligenceFactor() { return intelligence_factor; }
    
    virtual void SetPrimaryAttribute() = 0; // higher increase one of the attribute
    virtual void SetSecondaryAttribute() = 0;   // Slightly increase one of the attribute
    virtual void SetWeakness() = 0; // set up the weakness (ex: lower XP gain)
    virtual void LevelUp(int) = 0;  // param: level number
};

#endif /* ch_class_hpp */
