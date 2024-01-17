cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(SDL_GameEngine)

include_directories("../../SDL/include")
link_directories("../../SDL/build")

add_executable(SDL_GameEngine main.cpp error.cpp game.cpp object.cpp)
target_link_libraries(SDL_GameEngine "libSDL2-2.0.dylib")

