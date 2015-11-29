//
//  npc.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "npc.hpp"

NPC::NPC(std::string n) : name(n) { this->spells_pool = *new List<Spell>(); }
NPC::~NPC()
{
    free(&this->spells_pool);
}

void NPC::SetStrength(int s) { this->strength = s; }
void NPC::SetDefense(int d) { this->defense = d; }
void NPC::SetAttack(int a) { this->attack = a; }

void NPC::SetLife(int l) { this->life = l; }
void NPC::SetMana(int m) { this->mana = m; }

// set factors
void NPC::SetAttacksFactor(int f) { this->attack_factor = f; }
void NPC::SetDefenseFactor(int f) { this->defense_factor = f; }
void NPC::SetStrengthFactor(int f) { this->strength_factor = f; }

// spells
void NPC::AddSpell(Spell& s) { this->spells_pool.Insert(s); }

int NPC::Attack() { return 10; }

Spell& NPC::CastSpell()
{
    /* initialize random seed: */
    srand((unsigned int)time(NULL));
    
    /* generate secret number between 1 and size: */
    int size = this->spells_pool.Size();
    int random_index = rand() % size;
    
    return this->spells_pool.GetItem(random_index - 1);
}