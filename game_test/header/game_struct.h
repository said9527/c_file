#ifndef GAME_STRUCT_H
#define GAME_STRUCT_H

#include "game_types.h"
#include "game_abilites.h"

typedef struct {
    char name[50];
    CharacterClass character_class;
    Ability ability;
    uint32_t health;
    uint32_t level;
} Player;

typedef struct {
    EnemyType type;
    Ability ability;
    uint32_t health;
} Enemy;

#endif