//
//  spell.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef spell_hpp
#define spell_hpp

#include <stdio.h>
#include <string>

class Spell
{
private:
    std::string name = "";
    
public:
    Spell(std::string);
    Spell(const Spell&);
    ~Spell();
    
    Spell& operator=(const Spell&);
    
    friend bool operator!=(const Spell&, const Spell&);
    friend bool operator==(const Spell&, const Spell&);
    
    // methods
    void SetName(std::string);
};

#endif /* spell_hpp */
