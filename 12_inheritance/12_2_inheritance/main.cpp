#include <iostream>
#include <vector>

// Es wäre in der letzten Aufgabe praktisch gewesen, wenn man für die Funktion einfach so etwas
//  schreiben könnte, wie:
//      bool compare(Shape a, Shape b)
//  oder
//      std::vector<Shape> shapes

// Und genau das geht mit Vererbung!

// Hier ist ein Beispiel mit einem Fahrrad und einem Auto:

// Das ist hier die Basisklasse. Sie soll alle Gemeinsamkeiten von Auto und Fahrrad darstellen, ein Fahrzeug eben.
//  Im nächsten Schritt werden wir das Auto und Fahrrad von Vehicle ableiten.
//  Sie werden dann alle Member und Methoden von Vehicle haben.
class Vehicle
{
public:
    float velocity;

    // Methoden, die jede Unterklasse (Klasse, die von Vehicle ableitet) haben muss,
    //  beginnen mit dem Keyword "virtual" und haben "= 0;" am Ende.
    // Solche Methoden nennt man PURE VIRTUAL.
    // Klassen mit pure virtual methoden nennt man ABSTRAKT. (dazu gleich mehr)
    virtual std::string getNoiseLevel() = 0;
};

// Jetzt erstellen wir die Klasse für ein Auto:
// Dafür schreibt man nach den Klassennamen einfach public und dann den Namen der Basisklasse
// (Man könnte auch einen anderen access specifier als public nehmen, das ist aber selten und nicht im Stoff.)
class Car : public Vehicle
{
    // Da car von Vehicle auch den Member velocity erbt, ist es so, als würde hier stehen:
    // float velocity;

    // Alle pure-virtual-Methoden der Basisklasse müssen implementiert werden.
    // Dazu verwendet man "override"
    std::string getNoiseLevel() override
    {
        if (velocity == 0)
            return "quiet";
        else if (velocity < 30)
            return "low";
        else if (velocity < 100)
            return "medium";
        else
            return "high";
    }
};

// Über die Implementation der Fahrrad-Klasse muss nicht mehr viel gesagt werden,
//  hier ist nichts anders als beim Auto.
class Bicycle : public Vehicle
{
    std::string getNoiseLevel() override
    {
        if (velocity < 40)
            return "quiet";
        else if (velocity < 100)
            return "quiet, but rider may breathe loudly";
        else
            return "quiet, and very impressive";
    }
};

int main(void)
{
    Car car;
    car.velocity = 40;
    Bicycle bike;
    bike.velocity = 60;

    // Man kann keine Objekte von abstrakten Klassen erstellen, da sie ja nicht implementierte Methoden haben.
    // TODO: Versuche es, und sieh dir den Fehler an.

    // Was man aber machen kann, ist pointer oder Referenzen auf abstrakte Klassen zu erstellen:
    // TODO: Erstelle einen Vehicle* auf car und eine Vehicle& auf bike.

    // Man kann auch einen Container erstellen, der Vehicle* speichert:
    std::vector<Vehicle *> vehicles;

    vehicles.push_back(&car);
    vehicles.push_back(&bike);

    // TODO: Schreibe eine for-Schleife, die alle Geräuschlevel der Fahrzeug im std::vector
    //        so ausgibt:
    //       "Index <index>: <noiseLevel>"
    //       also z.B: "Index 0: quiet"
}

// TODO: Wenn du die Übungen hier geschafft hast, gehe nochmal in die letzte Übung zurück und
//        versuche die Aufgaben noch einmal, aber schreibe die Klassen zuerst so um, dass
//        sie von einer gemeinsamen Basisklasse shape ableiten.