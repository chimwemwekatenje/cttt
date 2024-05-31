#include "Triangle.h"
#include<iostream>

namespace shapes {
    Triangle::Triangle() {
        base = 0.0;
        height = 0.0;
    }
    Triangle::Triangle(float BASE, float HEIGHT) {
        base = BASE;
        height = HEIGHT;
    }

    Triangle::~Triangle() {
    }

    void Triangle::setBase(float BASE) {
        base = BASE;
    }

    void Triangle::setHeight(float HEIGHT) {
        height = HEIGHT;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }
}