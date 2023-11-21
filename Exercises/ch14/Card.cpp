#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;


Card::Card(Suit s, Rank r){
    suit = s;
    rank = r;
}



string Card::to_string() const {
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "2", "3", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::equals(const Card& other_card) const{
    return (rank==other_card.rank && suit == other_card.suit);
}

bool eq(const Card& c1, const Card& c2){
    return(c1.suit == c2.suit && c1.rank == c2.suit);
}

bool Card::is_greater(const Card& other_card) const{
    if(suit > other_card.suit) return true;
    if(suit < other_card.suit) return false;

    if(rank > other_card.rank) return true;
    if(rank < other_card.rank) return false;

    return false;
}
