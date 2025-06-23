#include <SFML/Graphics.hpp>

class Card{
    private:
    enum Suit{
        HEARTS,
        DIAMONDS,
        KINGS,
        SPADES
    };
    enum Rank{
        ACE = 11,   
        TWO = 2,     
        THREE = 3,   
        FOUR = 4,    
        FIVE = 5,    
        SIX = 6,     
        SEVEN = 7,   
        EIGHT = 8,   
        NINE = 9,    
        TEN = 10,    
        JACK = 10,   
        QUEEN = 10,  
        KING = 10

    };

    Suit suit_;
    Rank rank_;

    public:
        Card(Suit s, Rank r): suit_(s), rank_(r){}

        Suit getSuit() const{return suit_;}
        Rank getRank() const{return rank_;}

};


int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}