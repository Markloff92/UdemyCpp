#pragma once

#include <string>
#include <utility>
#include <vector>

using Position = std::pair<unsigned int, unsigned int>; // weil 2D
using GameState = std::vector<std::string>;             //Spielfeld ausgeben

constexpr unsigned int LEN_X = 5;
constexpr unsigned int LEN_Y = 5;
constexpr Position START = {0, 0}; // da 2D, bekommt es x,y koordinaten.
constexpr Position GOAL = {LEN_X - 1, LEN_Y - 1};

enum class ConsoleInput : int
{
    LEFT = 0,
    RIGHT = 1,
    UP = 2,
    DOWN = 3,
    INVALID = 4
};

ConsoleInput map_user_input(char user_input);

void print_game_state(Position player); // hier der typ Position anstatt unsigned int

Position execute_move(Position player, ConsoleInput move);

bool is_finished(Position player);

void game();
