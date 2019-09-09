//
//  player.h
//  AR0062
//
//  Created by Nicholas A Nelson on 9/9/19.
//  Copyright © 2019 Nick & Wolf. All rights reserved.
//

#pragma once

#include <stdio.h>

/*
 slot = player slot (1 of 4); not a real thing
 level = 11 - 10 (points, yo)
 hp = 1:3 (starting hp = level - 1; you get +1 each level)
 move = 3:1
 att = 1:1
 def 2:1
 */

typedef struct Player {
    char name[11];
    char level;
    char hp;
    char move;
    char att;
    char def;
} Player;

char* GetName(Player p);
char GetLevel(Player p);
char GetLevelPoints(Player p);
char GetMaxHP(Player p);
char GetHP(Player p);
char GetHPPoints(Player p);
char GetMove(Player p);
char GetMovePoints(Player p);
char GetAttack(Player p);
char GetAttackPoints(Player p);
char GetDefense(Player p);
char GetDefensePoints(Player p);


//make a default character, but also maybe make maps first
