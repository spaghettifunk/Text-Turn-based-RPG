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
    this->game_printer = new PrittyPrint();
}


GameManager::~GameManager() { }

void GameManager::InitializeStory()
{
    game_story = new Story();
    game_story->Init();
}

void GameManager::CreateCharacter()
{
    std::string name;
    int genderCharacter = -1;
    int typeCharacter = -1;
    int classCharatcter = -1;
    
    do {
        std::cout << "Inser your Name: ";
        std::cin >> name;
    } while (name != "" || name != " ");
    
    // set name
    this->main_character->SetName(name);
    
    do {
        std::cout << "Select gender: \n";
        std::cout << "1) Male\n";
        std::cout << "2) Female\n";
        std::cout << "Insert the number: ";
        std::cin >> genderCharacter;
    } while (genderCharacter > 2 || genderCharacter < 1);
    
    
    do {
        std::cout << "Select a Type of character:\n";
        std::cout << "1) Human\n";
        std::cout << "2) Dwarf\n";
        std::cout << "3) Orc\n";
        std::cout << "Insert the number: ";
        std::cin >> typeCharacter;
    } while (typeCharacter > 3 || typeCharacter < 1);
    
    do {
        std::cout << "\nSelect a Class among these:\n";
        std::cout << "1) Warrion\n";
        std::cout << "2) Necromance\n";
        std::cout << "3) Mage\n";
        std::cout << "Insert the number: ";
        std::cin >> classCharatcter;
    } while (classCharatcter > 3 || classCharatcter < 1);
    
    Gender gender;
    
    if (genderCharacter == 1) gender = M;
    else gender = F;
    
    // Human
    if (typeCharacter == 1 && classCharatcter == 1)
        this->main_character->InitializeCharacter(*(new Warrior(10, 10, 10, 10)),        // stamina, strength, agility, intelligence
                                                  *(new Human()),
                                                  gender);
    if (typeCharacter == 1 && classCharatcter == 2)
        this->main_character->InitializeCharacter(*(new Necromance(10, 10, 10, 10)),     // stamina, strength, agility, intelligence
                                                  *(new Human()),
                                                  gender);
    if (typeCharacter == 1 && classCharatcter == 3)
        this->main_character->InitializeCharacter(*(new Mage(10, 10, 10, 10)),       // stamina, strength, agility, intelligence
                                                  *(new Human()),
                                                  gender);
    // Dwarf
    if (typeCharacter == 2 && classCharatcter == 1)
        this->main_character->InitializeCharacter(*(new Warrior(10, 10, 10, 10)),        // stamina, strength, agility, intelligence
                                                  *(new Dwarf()),
                                                  gender);
    if (typeCharacter == 2 && classCharatcter == 2)
        this->main_character->InitializeCharacter(*(new Necromance(10, 10, 10, 10)),     // stamina, strength, agility, intelligence
                                                  *(new Dwarf()),
                                                  gender);
    if (typeCharacter == 2 && classCharatcter == 3)
        this->main_character->InitializeCharacter(*(new Mage(10, 10, 10, 10)),       // stamina, strength, agility, intelligence
                                                  *(new Dwarf()),
                                                  gender);
    // Orc
    if (typeCharacter == 3 && classCharatcter == 1)
        this->main_character->InitializeCharacter(*(new Warrior(10, 10, 10, 10)),        // stamina, strength, agility, intelligence
                                                  *(new Orc()),
                                                  gender);
    if (typeCharacter == 3 && classCharatcter == 2)
        this->main_character->InitializeCharacter(*(new Necromance(10, 10, 10, 10)),     // stamina, strength, agility, intelligence
                                                  *(new Orc()),
                                                  gender);
    if (typeCharacter == 3 && classCharatcter == 3)
        this->main_character->InitializeCharacter(*(new Mage(10, 10, 10, 10)),       // stamina, strength, agility, intelligence
                                                  *(new Orc()),
                                                  gender);
}

void GameManager::Update()
{
    // check story
    
    // check dialogs
    
    // check if in battle
    
    // print on screen everything
    this->game_printer->PrintOnScreen();
    
    // wait for user input
    std::string userInput = ""; // read from keyboard
    this->game_printer->GetUserInput(userInput);
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