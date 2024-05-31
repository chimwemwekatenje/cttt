#pragma once

namespace shapes {
    class Circle {
    private:
        float radius;
    public:
        Circle(); 
        Circle(float RADIUS);
        ~Circle(); 
        void setRadius(float RADIUS);
        float getRadius() const;
    };
}