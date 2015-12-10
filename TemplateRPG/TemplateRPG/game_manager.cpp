//
//  game_manager.cpp
//  TextTurnBaseRPG
//
//  Created by Davide Berdin on 09/12/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "game_manager.hpp"

GameManager::GameManager()
{
    // load last saved game
    this->LoadSavedGameState();
    
    // create pritty print object
    this->printer = new PrittyPrint();
}


GameManager::~GameManager() { }

void GameManager::Update()
{
    // check story
    
    // check dialogs
    
    // check if in battle
    
    // print on screen everything
    this->printer->PrintOnScreen();
    
    // wait for user input
    std::string userInput = ""; // read from keyboard
    this->printer->GetUserInput(userInput);
}

void GameManager::LoadSavedGameState()
{
    try {
        std::string line;
        std::ifstream state_file ("game_state.txt");
        if (state_file.is_open())
        {
            while (getline(state_file, line)) {
                std::cout << line << '\n';
            }
            state_file.close();
        }
        
        else std::cout << "Unable to open file";
        
    } catch (...) {
        std::exception_ptr p = std::current_exception();
    }
}


void GameManager::SaveGameState()
{
    try {
        std::ofstream state_file ("game_state.txt");
        if (state_file.is_open())
        {
            state_file << "This is a line.\n";
            state_file << "This is another line.\n";
            state_file.close();
        }
        else std::cout << "Unable to open file";
    } catch (...) {
        std::exception_ptr p = std::current_exception();
    }
}

bool GameManager::QuitGame()
{
    // this function is called a lot, so maybe
    // I should find a smarter way to check if user
    // wants to quit the game -> perhaps in Update() ??
    return quit;
}