#include "game_functions.h"

#include <stdio.h>
#include <string.h>


void create_player(Player* player, CharacterClass character_class, const char* name);

void generate_enemy(Enemy* enemy, EnemyType type);

void battle(Player* player, Enemy* enemy);

void print_player_info(const Player* player);

void print_enemy_info(const Enemy* enemy);