//
//  game.hpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 7/9/23.
//

#ifndef game_hpp
#define game_hpp

class Game
{
public:
    Game();
    bool init();
    bool running() { return !m_bQuit; }

private:
    bool m_bQuit;
};


#endif /* game_hpp */
