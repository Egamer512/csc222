#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};


struct Card {
    int suit, rank;

    Card();
    Card(Suit s, Rank r);
    string to_string() const;
    bool equals(const Card& other_card) const;
    bool is_greater(const Card& other_card) const;
};

Card::Card(){
    suit = CLUBS;
    rank = ACE;
}       

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

void print_deck(const vector<Card>& deck){
    for(int i = 0; i < deck.size(); i++){
        cout << deck[i].to_string() << endl;
    }
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

int main(){
    
    
    return 0;

}


