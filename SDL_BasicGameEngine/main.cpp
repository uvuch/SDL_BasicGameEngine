//
//  main.cpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#include "game.hpp"

int main(int argc, const char * argv[]) {
    Game *pGame = new Game();
    if (!pGame->init()) return -1;
    
    while(pGame->running()) {
        
    }

    return 0;
}
