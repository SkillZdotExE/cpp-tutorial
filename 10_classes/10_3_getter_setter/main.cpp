#include <iostream>

// Es gehört zur "Good Practice", getter und setter zu verwenden.
// Anstatt eine variable public zu machen, macht man sie private und implementiert
//  eine get- und eine set-Funktion, über die man die Variable lesen und schreiben kann.
// Private Variablen kennzeichnet man meist mit einem "_" am Anfang des namens.
// Tipp: Winkler kennzeichnet alle Member mit "m_" am Anfang des Namens und kennzeichnet private Member garnicht.

class Circle
{
private:
    float _radius;

public:
    float getRadius()
    {
        return _radius;
    }

    void setRadius(float newRadius)
    {
        _radius = newRadius;
    }
};

int main(void)
{
    // TODO: Erstelle ein Circle-Objekt und setze seinen Radius auf 5.
    //       Dann gib seinen radius über den Getter aus.
}