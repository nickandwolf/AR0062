//
//  deck.c
//  AR0062
//
//  Created by Nicholas A Nelson on 9/9/19.
//  Copyright © 2019 Nick & Wolf. All rights reserved.
//

#include "deck.h"

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

//Build Classic Deck
//Build Random Deck
//Build Custom Deck
//Build Group Custom Deck
//Build Booster Draw Deck
//Build Booster Draw Combined Deck

Deck BuildDeck(void) {
    Deck deck;
    for(int x = 0; x < 100; x++) {
        if (x < 25) {
            deck.cards[x].color = 0;
            if (x < 8) {
                deck.cards[x].value = 1;
            }
            else if (x < 16) {
                deck.cards[x].value = 2;
            }
            else if (x < 23) {
                deck.cards[x].value = 3;
            }
            else {
                deck.cards[x].value = 10;
            }
        }
        else if (x < 50) {
            deck.cards[x].color = 1;
            if (x < 25+4) {
                deck.cards[x].value = 3;
            }
            else if (x < 25+8) {
                deck.cards[x].value = 4;
            }
            else if (x < 25+11) {
                deck.cards[x].value = 5;
            }
            else if (x < 25+14) {
                deck.cards[x].value = 6;
            }
            else if (x < 25+17) {
                deck.cards[x].value = 7;
            }
            else if (x < 25+20) {
                deck.cards[x].value = 8;
            }
            else if (x < 25+23) {
                deck.cards[x].value = 9;
            }
            else if (x == 48) {
                deck.cards[x].value = 11;
            }
            else {
                deck.cards[x].value = 12;
            }
        }
        else if (x < 75) {
            deck.cards[x].color = 2;
            if (x < 50+4) {
                deck.cards[x].value = 3;
            }
            else if (x < 50+8) {
                deck.cards[x].value = 4;
            }
            else if (x < 50+11) {
                deck.cards[x].value = 5;
            }
            else if (x < 50+14) {
                deck.cards[x].value = 6;
            }
            else if (x < 50+17) {
                deck.cards[x].value = 7;
            }
            else if (x < 50+20) {
                deck.cards[x].value = 8;
            }
            else if (x < 50+23) {
                deck.cards[x].value = 9;
            }
            else if (x == 73) {
                deck.cards[x].value = 13;
            }
            else {
                deck.cards[x].value = 14;
            }
        }
        else {
            deck.cards[x].color = 3;
            if (x < 75+6) {
                deck.cards[x].value = 15;
            }
            else if (x < 75+12) {
                deck.cards[x].value = 16;
            }
            else if (x < 75+18) {
                deck.cards[x].value = 17;
            }
            else if (x < 75+25) { //extra card here
                deck.cards[x].value = 18;
            }
        }
    }
    deck.cardsLeft = 100;
    return deck;
}
