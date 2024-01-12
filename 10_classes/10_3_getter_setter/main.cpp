#include <iostream>

// Es gehört zur "Good Practice", getter und setter zu verwenden.
// (Ausserdem: Winkler steht drauf und sie werden vom Qt-Framework verwendet.)
// Anstatt eine Variable public zu machen, macht man sie private und implementiert
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

// TODO: Schreibe die Klasse Person so um, dass name von aussen nicht einsehbar ist und
//        Getter und Setter verwendet.
//        Ändere auch ihre Verwendung im main dementsprechend.

class Person
{
public:
    std::string name;
};

int main(void)
{
    Person p;
    p.name = "Max";
    std::cout << "My name is " << p.name << "\n";
}