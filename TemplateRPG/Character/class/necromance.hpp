//
//  necromance.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef necromance_hpp
#define necromance_hpp

#include <stdio.h>
#include "ch_class.hpp"

class Necromance : public Ch_Class
{
private:
    
public:
    
    Necromance(int, int, int, int);
    ~Necromance();
    
    void SetPrimaryAttribute(); // increment agility
    void SetSecondaryAttribute();   // slightly increment intelligence
    void SetWeakness(); // lowel damage
    void LevelUp(int); 
};

#endif /* necromance_hpp */
