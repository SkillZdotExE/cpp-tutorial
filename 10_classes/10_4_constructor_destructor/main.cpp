#include <iostream>

// Es gibt in Klassen und Structs zwei spezielle Methoden: Den Constructor und den Destructor.
//
// Der Constructor ist die Methode, die IMMER aufgerufen wird, wenn man irgendwo ein neues Objekt erstellt.
// Er sieht aus wie eine Methode ohne Rückgabetyp mit dem gleichen Namen wie die Klasse/ das Struct.
//
// Der Deconstructor ist die Methode, die IMMER aufgerufen wird, wenn ein Objekt zerstört wird (z.B. am Ende der Funktion in der es erstellt wird).
// Er sieht gleich aus wei der Constructor, nur mit einem "~" davor.

struct Circle
{
public:
    float radius;

    Circle()
    {
        std::cout << "A Circle was created!\n";
    }

    ~Circle()
    {
        std::cout << "A Circle was destroyed!\n";
    }
};

// TODO: Führe das Programm aus und versuche nachzuvollziehen, wieso welche Nachricht wann ausgegebn wird.

// Constructoren können auch Argumente haben.
// Wenn man keinen(!) Constructor definiert, hat ein Objekt automatisch einen Default-Constructor.
// Der Default-Constructor nimmt keine Argumente, und gibt einfach ein neues Objekt zurück.
// Wenn man allerdings irgendeinen(!) Constructor definiert, wird der Default-Constructor nicht mehr automatisch erstellt.

struct Rectangle
{
    float width;
    float height;

    Rectangle(float newWidth, float newHeight)
        : width(newWidth), height(newHeight)
    {
    }
};

int main(void)
{
    Circle c;
    std::cout << "Hello World!\n";

    // Rectangle r; // Geht nicht, denn Rectangle hat keinen Constructor, der ohne Argumente aufgerufen werden kann! (Default-Constructor gelöscht)
    // So ruft man einen Constructor mit Argumenten auf:
    Rectangle r(3, 4);

    // Rectangle* rPtr = new Rectangle(); // Geht auch nicht aus dem selben Grund!
    // So benutzt man einen Constructor mit Argumenten bei Pointern:
    Rectangle *rPtr = new Rectangle(3, 4);

    // Kein Memory Leak!
    delete rPtr;
}