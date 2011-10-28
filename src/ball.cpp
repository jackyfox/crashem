#include "../include/ball.h"

Ball::Ball(unsigned int mass, unsigned int radius, BallMaterial material)
{
    //ctor
    mass_     = mass;
    radius_   = radius;
    material_ = material;
    if (this->material() == METAL)
        this->texture_ = "../resouces/img/metal-ball.png";
}
