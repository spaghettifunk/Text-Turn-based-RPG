//
//  armour.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef armour_hpp
#define armour_hpp

#include <stdio.h>
#include <string>

enum Part { Head, Body, Legs, Arms, Hands, Shoulders, Feet, Neck };

class Armour
{
private:
    std::string name = "";  // armour name
    
    int duration = 100; // legth of duration
    int duration_factor = 1;    // this will change che lifetime
    
    Part body_part; // define the body part of the armour
    
    // stats here
    int defense_factor = 1;
    
public:
    Armour(std::string);
    Armour(const Armour&);
    ~Armour();
    
    Armour& Next();
    Armour& operator=(const Armour&);
    
    friend bool operator==(const Armour&, const Armour&);
    friend bool operator!=(const Armour&, const Armour&);
    
    // methods
    void SetName(std::string);
    void SetDuration(int);
    void SetDurationFactor(int);
    void SetPart(Part);
    void SetDefenseFactor(int);
};

#endif /* armour_hpp */
