#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;


Card::Card(Suit s, Rank r){
    suit = s;
    rank = r;
}

vector<Card> create_deck(){
    vector<Card> deck(52);
    int i = 0; // this is to go to every "holder" of the vector
    for(int suit = CLUBS; suit <=SPADES; suit = Suit(suit+1)){
        for(int rank = ACE; rank <= KING; Rank(rank+1)){
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}


