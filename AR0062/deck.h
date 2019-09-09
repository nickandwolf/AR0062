//
//  deck.h
//  AR0062
//
//  Created by Nicholas A Nelson on 9/9/19.
//  Copyright © 2019 Nick & Wolf. All rights reserved.
//

#pragma once

/*
 NOTES:
 Figure out best way save memory on this card shit.
 Like they can share values since the color is different.
 Add random cards
 */
/*CARDS*///7 extra cards to randomize
         //0 Blue = Movement (23 cards)
         //  +1/+2/+3/E(x2)[10]
         //1 Yellow = Def/Evasion (23 cards)
         //  +3/+4/+5/+6/+7/+8/+9/A/D (only 1 A/D)
         //  A+D = total trap protection
         //  D = double def [11]
         //  A = max def [12]
         //2 Red = Attack (23 cards)
         //  +3/+4/+5/+6/+7/+8/+9/C/S (only 1 C/S)
         //  C = add opponent's attack [13]
         //  S = double attack [14]
         //3 Green = S/L/E/D [15,16,17,18] (24 cards)
         //  S = Stun (loses turn, has def of 0)
         //  L = Leg (movement is 0, can remove with EXIT tile, blue or green flag, surrender in battle)
         //  E = Empty (removes all cards in hand, prevents getting more cards until it wears off [???wtf does that mean???])
         //  D = Damage (take damage)

typedef struct Card {
    char color;
    char value;
} Card;

//Build Classic Deck
//Build Random Deck
//Build Custom Deck
//Build Group Custom Deck
//Build Booster Draw Deck
//Build Booster Draw Combined Deck
typedef struct Deck {
    char cardsLeft;
    Card cards[100];
} Deck;

Deck BuildDeck(void);
