cmake_minimum_required(VERSION 3.16)

project(sdl_game)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(external/SDL)
add_subdirectory(external/SDL_Image)
add_subdirectory(external/SDL_ttf)
add_subdirectory(SDL_BasicGameEngine)
