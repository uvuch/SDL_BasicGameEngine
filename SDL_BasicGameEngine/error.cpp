//  error.cpp
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 8/14/23.
//

#include "error.h"

Error* Error::m_pInstance = nullptr;

Error* Error::instance() {
    if (!m_pInstance)
        m_pInstance = new Error();
    
    return m_pInstance;
}

int Error::message(const char *msg) {
    std::cout << "!! Error: ";
    std::cout << msg << std::endl;
    return -1;
}
