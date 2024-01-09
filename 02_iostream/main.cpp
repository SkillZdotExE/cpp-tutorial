// Um Bibliotheken (Header) zu benutzen verwendet man ein #include-statement
// In dieser Übung verwenden wir die C++ Standardbibliothek <iostream> für Ein- und Ausgabe von Daten.
// Auch in jeder weiteren Übung wird diese Bibliothek verwendet.
#include <iostream>

int main(void)
{
    // Alle Komponenten aus den C++-Standardbibliotheken befinden sich in einem sogenannten Namespace namens std.
    // Namespaces sind nur zur Organisation des Codes da.
    // Mit std::cout ("c - out") kann man Text in die Konsole schreiben.
    // Wir schreiben hier den Text "Hello World" - mit einem \n (newline oder "enter") danach, um in die nächste Zeile zu hüpfen.
    std::cout << "Hello World!\n";

    // Mit std::cout kann man auch Variablen ausgeben:
    int i = 5;
    float f = 2.5;
    char c = 'C';

    std::cout << "i = " << i;
    std::cout << "f = " << f;
    std::cout << "c = " << c;

    // TODO: Kompiliere das Programm und schau dir die obenstehende Ausgabe an.
    // TODO: Formattiere den Output richtig, indem du die 3 Zeilen oben änderst.

    // Mit std::cin ("c - in") kann man input von der Konsole lesen.

    std::cout << "Please enter an Integer: ";
    long l;

    std::cin >> l;

    std::cout << "You entered " << l << '\n';

    // TODO: Erstelle eine Variable double d, lese einen Wert aus std::cin ein.

    // TODO: Multipliziere d mit 2 und gib das Ergebnis aus
}