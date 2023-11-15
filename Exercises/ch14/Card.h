#include <iostream>
#include <vector>
using namespace std;


enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

struct Card{

    Rank rank;
    Suit suit;
    
    Card(Suit s, Rank r);
};