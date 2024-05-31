#include "Area.h"

namespace shapes {

    float PI = 22.0/7.0;

    float Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    float Area::calculateArea(const Triangle& triangle) {
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }

    float Area::calculateArea(const Circle& circle) {
        return PI * circle.getRadius() * circle.getRadius();
    }
}
