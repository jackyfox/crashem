#ifndef CRASHEM_BALL_H_
#define CRASHEM_BALL_H_

#include <string>

enum BallMaterial {
    METAL,
    WOOD,
    STONE,
    PLASTIC
};

class Ball
{
    public:
        /** Default constructor */
        Ball(unsigned int mass, unsigned int radius, BallMaterial material);

        unsigned int mass() { return mass_; }
        void set_mass(unsigned int mass) { mass_ = mass; }

        unsigned int radius() { return radius_; }
        void set_radius(unsigned int radius) { radius_ = radius; }

        BallMaterial material() { return material_; }
        void set_material(BallMaterial material) { material_ = material; }

        std::string texture() { return texture_; }
    protected:
    private:
        unsigned int mass_; //!< Ball weight
        unsigned int radius_; //!< Ball radius
        BallMaterial material_; //!< Ball material
        std::string texture_;
};

#endif // CRASHEM_BALL_H_
