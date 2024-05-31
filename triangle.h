#pragma once

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle(); 
        Triangle(float BASE, float HEIGHT); 
        ~Triangle(); 
        void setBase(float BASE);
        void setHeight(float HEIGHT);
        float getBase() const;
        float getHeight() const;
    };
}
