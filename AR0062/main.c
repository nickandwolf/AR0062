#include<stdio.h>
#include "deck.h"
#include "player.h"

//AR0062

int main(void) {
    Player p;
    strcpy(p.name, "foo");
    printf("%d", GetName(p));
    //do player name
    //test = BuildDeck();
}
