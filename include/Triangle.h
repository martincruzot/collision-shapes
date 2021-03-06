#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape
{
    public:

        Triangle(b2World &world, sf::Vector2f center);

        void draw(sf::RenderWindow &window);

    protected:

        sf::ConvexShape m_shape;

    private:
};

#endif // TRIANGLE_H
