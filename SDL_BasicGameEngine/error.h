//
//  error.h
//  SDL_BasicGameEngine
//
//  Created by Serge Muzyka on 8/14/23.
//

#ifndef error_h
#define error_h

#include <iostream>

class Error {
public:
    static Error* instance();
    int message(const char *msg);
    
private:
    static Error *m_pInstance;
    Error() {}
};

#define errorMessage(msg)   Error::instance()->message(msg);

#endif /* error_h */
