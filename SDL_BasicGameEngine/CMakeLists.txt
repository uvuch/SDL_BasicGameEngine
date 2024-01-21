cmake_minimum_required(VERSION 3.16)

add_executable(sdl_game main.cpp error.cpp game.cpp object.cpp)
add_dependencies(sdl_game SDL2::SDL2 SDL2_image SDL2_ttf)

target_link_libraries(sdl_game PRIVATE SDL2::SDL2 SDL2_image SDL2_ttf)
# target_link_libraries(sdl_issue PRIVATE SDL2::SDL2-shared)
# target_link_libraries(sdl_issue PRIVATE SDL2::SDL2-static)