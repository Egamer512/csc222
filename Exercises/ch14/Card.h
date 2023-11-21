#include <iostream>
#include <vector>
#include <string>
using namespace std;


enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

struct Card{

    Rank rank;
    Suit suit;

    Card(Suit s, Rank r);
    string to_string() const;
    bool equals(const Card& other_card) const;
    bool is_greater(const Card& other_card) const;
};
