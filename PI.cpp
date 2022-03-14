#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;

double area(int radius) {

    double area = 0;
    area = radius * radius * 3.14;
    cout << " = area purple " << endl;
    return area ;

}

double area2(int radius) {

    double area = 0;
    area = radius * radius * 3.14;
    cout << " = area blue " << endl;
    return area;

}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;

    int xpos = 0;
    int ypos = 0;
    int size = 50;

    int xpos2 = 0;
    int ypos2 = 0;
    int size2 = 20;
    
    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 10; j++) {
                circle.setRadius(size);
                circle.setFillColor((sf::Color(144, 26, 176, 200)));
                circle.setPosition(xpos + i * 100 , ypos + j* 100);
                window.draw(circle);

                circle.setRadius(size2);
                circle.setFillColor((sf::Color(0, 229, 255, 100)));
                circle.setPosition(xpos2 + i * 100 + 30, ypos2 + j * 100 + 30);
                window.draw(circle);
            }
        }
        
        cout << area(size);
        cout << area2(size2);

        window.display();

    }//end game loop-------------------------------------------------

    //cout <<"The area is: " << size * 3.14 << endl;

    return 0;
} //end main

