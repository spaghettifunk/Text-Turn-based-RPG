//
//  pretty_print.hpp
//  TextTurnBaseRPG
//
//  Created by Davide Berdin on 09/12/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef pretty_print_hpp
#define pretty_print_hpp

#include <stdio.h>
#include <iostream>

class PrittyPrint
{
public:
    PrittyPrint();
    ~PrittyPrint();
    
    void PrintOnScreen();
    void GetUserInput(std::string input);
};

#endif /* pretty_print_hpp */
