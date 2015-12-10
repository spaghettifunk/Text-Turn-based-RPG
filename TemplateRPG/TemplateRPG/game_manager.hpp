//
//  game_manager.hpp
//  TextTurnBaseRPG
//
//  Created by Davide Berdin on 09/12/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef game_manager_hpp
#define game_manager_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <exception>
#include <typeinfo>
#include <stdexcept>

#include "pretty_print.hpp"

class GameManager
{
private:
    bool quit = false;
    
    PrittyPrint* printer;

public:
    GameManager();
    ~GameManager();
    
    void Update();
    
    void LoadSavedGameState();
    void SaveGameState();
    
    bool QuitGame();
};

#endif /* game_manager_hpp */
