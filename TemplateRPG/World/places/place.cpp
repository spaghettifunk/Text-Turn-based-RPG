//
//  place.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "place.hpp"

Place::Place(std::string n) : name(n) { }
Place::Place(const Place& it): name(it.name) { }
Place::~Place() { }

Place& Place::operator=(const Place& item)
{
    if(this == &item)
        return *this;
    
    // update values here
    name = item.name;
    
    return *this;
}

bool operator==(const Place& it1, const Place& it2)
{
    return it1.name == it2.name;
}

bool operator!=(const Place& it1, const Place& it2)
{
    return it1.name != it2.name;
}