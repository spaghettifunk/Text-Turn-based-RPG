//
//  item.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "item.hpp"

Item::Item(std::string n)
{
    // initialize values here
    name = n;
}

Item::Item(const Item& it)
{
    // update values here
    name = it.name;
}

Item& Item::operator=(const Item& item)
{
    if(this == &item)
        return *this;

    // update values here
    name = item.name;
    
    return *this;
}

bool operator==(const Item& it1, const Item& it2)
{
    return it1.name == it2.name;
}

bool operator!=(const Item& it1, const Item& it2)
{
    return it1.name != it2.name;
}