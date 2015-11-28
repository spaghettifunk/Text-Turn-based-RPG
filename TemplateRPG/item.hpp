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
#include <string>

class Item
{
private:
    std::string name = "";
    int lifetime = 100;
    
public:
    Item(const Item&);
    
    Item& operator=(const Item&);
    
    friend bool operator!=(const Item&, const Item&);
    friend bool operator==(const Item&, const Item&);
    
    // methods
    void SetName(std::string);
    void SetLifetime(int);
};

#endif /* item_hpp */
