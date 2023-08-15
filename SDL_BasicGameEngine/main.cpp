//
//  main.cpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#include "game.hpp"

int main(int argc, const char * argv[]) {
    Game *pGame = new Game();
    if (!pGame) {
        std::cout << "!! Error: Could not create game object\n" << std::endl;
        return -1;
    }
    
    if (!pGame->init()) {
        delete pGame;
        return -1;
    }
    
    while(pGame->running()) {
        pGame->handleEvents();
        pGame->update();
        pGame->render();
    }
    
    delete pGame;
    return 0;
}
