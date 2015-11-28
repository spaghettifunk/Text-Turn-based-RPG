//
//  base_character.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef base_character_hpp
#define base_character_hpp

#include <stdio.h>

#include "ch_list.hpp"
#include "ch_class.hpp"
#include "ch_type.hpp"
#include "item.hpp"
#include "armour.hpp"
#include "weapon.hpp"

enum Gender { M, F };

class Base_Character
{
private:
    
    int life = 100;     // Hp life
    int mana = 100;     // mana for spells
    
    Gender ch_gender;   // either Female or Male
    
    Ch_Class ch_class;  // class of character: Warrior/Mage/Necromance
    CH_Type ch_type;    // type of character: Human/Orc/Dwarf
    
    List<Armour> armour; // list of pieces for the armour
    List<Item> bag;  // list of the items in the bag
    
    Weapon ch_weapon;   // current weapon
    
public:
    Base_Character();
    ~Base_Character();
    
    // methods
    void InitializeCharacter(Ch_Class&, CH_Type&, Gender);
    
    void AddItemBag(Item&);
    void SetArmour(Armour&);
    void SetWeapon(Weapon&);
    void Damage(int);
    void Cure(int);
    void AddMana(int);
    void RemoveMana(int);
    
    // getters
    int GetLife();
    int GetMana();
    Gender GetGender();
};

#endif /* base_character_hpp */
