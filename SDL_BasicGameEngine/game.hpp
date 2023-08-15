//
//  game.hpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#ifndef game_hpp
#define game_hpp

#include <SDL2/SDL.h>
#include <iostream>

class Game
{
public:
    Game();
    ~Game();

    bool init();
    bool running() { return !m_bQuit; }
    void handleEvents();
    void update();
    void render();
    
private:
    bool m_bQuit;
};


#endif /* game_hpp */
