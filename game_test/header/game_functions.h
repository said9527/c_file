#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include "game_struct.h"

//函数原型
void create_player(Player* player, CharacterClass character_class, const char* name);

void generate_enemy(Enemy* enemy, EnemyType type);

void battle(Player* player, Enemy* enemy);

void print_player_info(const Player* player);

void print_enemy_info(const Enemy* enemy);

#endif