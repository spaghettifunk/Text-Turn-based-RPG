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

class Armour
{
private:
    std::string name = "";
    int lifetime = 100;
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
    void SetLifetime(int);
};

#endif /* armour_hpp */
