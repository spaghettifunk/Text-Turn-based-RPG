//
//  item.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "item.hpp"

Item::Item(const Item& it)
{
    // update values here
}

Item& Item::operator=(const Item& item)
{
    if(this == &item)
        return *this;

    // update values here
    
    return *this;
}

bool operator==(const Item& it1, const Item& it2)
{
    return true;
}

bool operator!=(const Item& it1, const Item& it2)
{
    return true;
}