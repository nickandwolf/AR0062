//
//  player.c
//  AR0062
//
//  Created by Nicholas A Nelson on 9/9/19.
//  Copyright © 2019 Nick & Wolf. All rights reserved.
//

#include "player.h"

char* GetName(Player p) {
    return p.name;
}

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
