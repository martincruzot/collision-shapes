#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <iostream>
#include <string>

class Shape
{
    public:

        Shape();

        virtual void draw(sf::RenderWindow &window);

        void    setBody(b2Body* body);

        b2Body* getBody();

    protected:

        std::string     m_name;
        sf::Color       m_color;
        b2Body*         m_body;
        sf::Vector2f    m_size;

    private:
};

#endif // SHAPE_H