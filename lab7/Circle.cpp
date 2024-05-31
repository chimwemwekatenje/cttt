#include "Circle.h"
#include<iostream>

namespace shapes {
    Circle::Circle() {
        radius = 0.0;
    }

    Circle::Circle(float RADIUS) {
        radius = RADIUS;
    }

    Circle::~Circle() {
    }

    void Circle::setRadius(float RADIUS) {
        radius = RADIUS;
    }

    float Circle::getRadius() const {
        return radius;
    }
}