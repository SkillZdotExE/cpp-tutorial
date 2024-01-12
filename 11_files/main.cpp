#include <iostream>

#include "Circle.h"

// In C++ gibt es zwei Arten von Dateien: Header und Source files.
// In Header files (.h oder .hpp) steht kein Code, der ausgeführt wird, sondern nur die Struktur.
// In Source files (.cpp) sind die Methoden der in Headern definierten Klassen und Funktionen implementiert.
// Am besten schaust du dir dazu die Klasse Circle an, welche in Circle.h und Circle.cpp definiert ist. (Beginne mit dem Header)

// Um einen Header file in ein Programm einzubinden, benutzt man eine #include-Anweisung mit "" statt <>. (Siehe oben)
// Beim kompilieren muss man nun auch alle verwendeten Sourcefiles mitkompilieren.
// Kompiliert man über die Befehlszeile mit z.B. g++, gibt man einfach mehrere .cpp-files an:
//    g++ main.cpp Circle.cpp Rectangle.hpp
// Versuche ruhig, nur main.cpp zu kompilieren. Du wirst einen linker-Fehler erhalten.
// Merke dir, wie dieser Fehler in etwa ausschaut. Bekommst du beim kompilieren so einen Fehler,
//  hast du höchstwahrscheinlich vergessen, einen .cpp file zu kompilieren, dessen Header du benutzt.

// TODO: Implementiere die Klasse Rectangle mit Header und Source file. Sie soll mindestens einen Member und eine Methode haben.
//       Inkludiere den Headerfile und teste alle Funktionen der Klasse im main.

int main(void)
{
    Circle c;

    c.setRadius(5);

    std::cout << "Radius of circle c is " << c.getRadius() << " and circumference is " << c.getCircumference() << ".\n";
}