#include <iostream>

// Klassen können nicht nur Variablen (Member) beinhalten, sondern auch Methoden (Funktionen)
// Diese können auf ein Objekt der Klasse gleich wie Member mit dem . Operator aufgerufen werden.

// TODO: Erstelle eine Methode getArea für die Klasse Circle und benutze sie im main.
//  (Fläche = 3.14 * radius^2)

class Circle
{
public:
    float radius;

    float getCircumference()
    {
        return radius * 3.14;
    }
};

int main(void)
{
    Circle c;
    c.radius = 2;

    std::cout << "Circle c has radius " << c.radius << " and circumference " << c.getCircumference() << ".\n";
}