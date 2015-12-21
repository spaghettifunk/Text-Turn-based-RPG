//
//  main.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include <iostream>

#include "game_manager.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    GameManager game_manager;
    
    game_manager.CreateCharacter();
    
    while (!game_manager.QuitGame()) {
        game_manager.Update();
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
