//
//  game.cpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#include "error.h"
#include "game.h"

Game::Game() : m_bQuit(true) {};

Game::~Game() {
    SDL_Quit();
}

int Game::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        return errorMessage(SDL_GetError());
    
    m_bQuit = false;
    
    return 0;
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
