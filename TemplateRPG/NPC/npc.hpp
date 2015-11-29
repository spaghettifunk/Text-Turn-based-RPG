//
//  npc.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef npc_hpp
#define npc_hpp

#include <stdio.h>
#include <string>
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

#include "spell.hpp"
#include "ch_list.hpp"

class NPC
{
private:
    // parameters
    std::string name = "";
    
    int life = 100;
    int mana = 100;
    
    int strength = 10;
    int defense = 10;
    int attack = 10;
    
    int attack_factor = 10;
    int defense_factor = 10;
    int strength_factor = 10;
    
    List<Spell> spells_pool;
    
protected:
    // set params
    void SetStrength(int);
    void SetDefense(int);
    void SetAttack(int);
    
    void SetLife(int);
    void SetMana(int);
    
    // set factors
    void SetAttacksFactor(int);
    void SetDefenseFactor(int);
    void SetStrengthFactor(int);
    
    // spells
    void AddSpell(Spell&);
    Spell& CastSpell();  // return the spell
    
public:
    
    NPC(std::string);
    virtual ~NPC();
    
    virtual int Attack();       // return the damage
};

#endif /* npc_hpp */
