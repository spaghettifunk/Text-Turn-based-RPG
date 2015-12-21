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
#include "base_character.hpp"
#include "story.hpp"
#include "world.hpp"

// type
#include "human.hpp"
#include "dwarf.hpp"
#include "orc.hpp"

// classes
#include "mage.hpp"
#include "warrior.hpp"
#include "necromance.hpp"

class GameManager
{
private:
    bool quit = false;
    
    PrittyPrint* game_printer;
    Story* game_story;
    World* game_world;
    
    Base_Character* main_character;

public:
    GameManager();
    ~GameManager();
    
    void Update();
    
    void LoadSavedGameState();
    void SaveGameState();
    
    void InitializeStory();
    void CreateCharacter();
    
    bool QuitGame();
};

#endif /* game_manager_hpp */
