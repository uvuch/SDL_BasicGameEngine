//
//  game.cpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#include "game.hpp"

Game::Game() : m_bQuit(true) {};

Game::~Game() {
    SDL_Quit();
}

bool Game::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "!! Error: " << SDL_GetError() << std::endl;
        return false;
    };
    
    m_bQuit = false;
    
    return true;
}

void Game::handleEvents() {
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT)
            m_bQuit = true;
    }
}

void Game::update() {
    
}

void Game::render() {
    
}
