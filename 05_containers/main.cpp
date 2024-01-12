#include <iostream>

#include <array>  // Für std::array
#include <vector> // Für std::vector
#include <string> // Für std::string

int main(void)
{
    // Will man viele variablen zusammen speichern, so verwendet man einen Container.
    // Es gibt verschiedene Container in der C++-Standardbibliothek:

    // Arrays sind quasi eine "Liste" von Elementen.
    // Arrays haben eine fixe Größe (hier 5).
    std::array<int, 5> arr = {0, 1, 2, 3, 4};

    // Arrays sind null-indiziert, also ist das erste Element an der Stelle 0!
    // Das bedeutet, das man bei einem Array mit 5 Elementen nicht auf das 5. Element zugreifen darf.
    arr[0] = 10;
    arr[4] = 40;

    // Container haben viele praktische Funktionen, wie s.B. size()
    // Wenn du eine Funktion in einem Container suchst, gib einfach einen Punkt nach seinem Namen
    //  ein, z.B. "arr.". Dann bekommst du alle Funktionen und Variablen vorgeschlagen, die der COntainer bereitstellt.
    std::cout << "The array has " << arr.size() << " elements:\n";
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << "arr[" << i << "]: " << arr[i] << '\n';
    }

    // Vektoren sind ähnlich wie Arrays, haben aber keine fixe Größe.
    // Im Unterricht verwenden wir hauptsächlich Vektoren.
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(50);
    vec[0] = 10;

    std::cout << "The vector has " << vec.size() << " elements:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "vec[" << i << "]: " << vec[i] << '\n';
    }

    // Strings sind grundsätzlich nichts anderes als Arrays aus char's, also Zeichenfolgen oder "Text".
    std::string helloWorld = "Hello";
    std::string empty = "";

    helloWorld.append("\tWorld !\n");

    std::cout << "The string is \"" << helloWorld << "\"\n";

    // TODO: Erstelle eine Funktion printString, die die characters eines Strings Zeile für Zeile ausgibt
    // Dabei soll statt einem Leerzeichen "space", statt einem '\n' "newline" und statt einem '\t' "tab" ausgegeben werden

    printString(helloWorld);
}