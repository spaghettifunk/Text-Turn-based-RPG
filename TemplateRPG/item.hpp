//
//  item.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef item_hpp
#define item_hpp

#include <stdio.h>

class Item
{
private:
    Item *next;
public:
    Item* Next();
};

#endif /* item_hpp */
