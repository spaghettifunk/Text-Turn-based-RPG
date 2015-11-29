//
//  base_character.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "base_character.hpp"

Base_Character::Base_Character()
{
    this->bag = *new List<Item>();
    this->armour = *new List<Armour>();
}

Base_Character::~Base_Character() { }

void Base_Character::InitializeCharacter(Ch_Class& c, CH_Type& t, Gender g)
{
    this->ch_class = &c;
    this->ch_type = &t;
    this->ch_gender = g;
    
    this->ch_class->SetPrimaryAttribute();
    this->ch_class->SetSecondaryAttribute();
    this->ch_class->SetWeakness();
}

// methods
void Base_Character::SetName(std::string name) { this->ch_name = name; }
void Base_Character::AddItemBag(Item item) { this->bag.Insert(item); }
void Base_Character::RemoveItemBag(Item item) { this->bag.Remove(item); }
void Base_Character::SetArmour(Armour armour) { this->armour.Insert(armour); }
void Base_Character::RemoveArmour(Armour armour) { this->armour.Remove(armour); }
void Base_Character::SetWeapon(Weapon& weapon) { this->ch_weapon = &weapon; }
void Base_Character::RemoveWeapon() { this->ch_weapon = nullptr; }

// set EXP and level up in case
void Base_Character::SetXP(int xp)
{
    exp += xp;
    if (exp > 100) {
        LevelUp();
    }
    else if (exp > 250) {
        LevelUp();
    }
    else if (exp > 600) {
        LevelUp();
    }
    else if (exp > 1000) {
        LevelUp();
    }
    else if (exp > 1500) {
        LevelUp();
    }
    else if (exp > 2500) {
        LevelUp();
    }
    else if (exp > 4000) {
        LevelUp();
    }
}

// level up based on the type and class
void Base_Character::LevelUp()
{
    ++level;
    ch_type->LevelUp(level);
    ch_class->LevelUp(level);
}

// TODO: say that the gold is not enough
void Base_Character::SetGold(int amount)
{
    int temp = gold + amount;
    if (temp <= 0) {
        // you can't buy it
        return;
    }
    
    gold = temp;
}

// Apply damage to character
void Base_Character::Damage(int damage)
{
    int final_val = this->life - damage;
    if (final_val <= 0) {
        // death
        this->life = 0;
    } else {
        this->life = final_val;
    }
}

// Apply cure to character
void Base_Character::Cure(int cure)
{
    int final_val = this->life + cure;
    if (final_val > 100) {
        this->life = 100;
    }
    else {
        this->life = final_val;
    }
}

// Remove x amount of mana to the character
void Base_Character::RemoveMana(int remove_mana)
{
    int final_val = this->mana + remove_mana;
    if (final_val <= 0) {
        this->mana = 0;
    }
    else {
        this->mana = final_val;
    }
}

// Add x amount of mana to the character
void Base_Character::AddMana(int add_mana)
{
    int final_val = this->mana + add_mana;
    if (final_val > 100) {
        this->mana = 100;
    }
    else {
        this->mana = final_val;
    }
}

// getters
int Base_Character::GetLife() { return this->life; }
int Base_Character::GetMana() { return this->mana; }
Gender Base_Character::GetGender() { return this->ch_gender; }



