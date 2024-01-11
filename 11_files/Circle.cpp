#include <iostream>

#include "Circle.h"

// Implementation der Bereits definierten Funktion getRadius
float Circle::getRadius()
{
    return _radius;
}

// Implementation der Bereits definierten Funktion setRadius
void Circle::setRadius(float r)
{
    _radius = r;
}

// Implementation der Bereits definierten Funktion getCircumference
float Circle::getCircumference()
{
    return _radius * 3.14;
}