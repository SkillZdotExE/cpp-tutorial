#include <iostream>

// Klassen sind im prinzip das gleiche wie structs.
// Diese Klasse heißt SomeClass, und hat die Member a, b, sa und sb.
// private und public sind sogenannte access-specifier, den sie bestimmen,
//  auf welche Member man von aussen Zugreifen kann.
// Alles, was unter private steht, ist von ausserhalb der Klasse nicht einsehbar.
// Alles, was unter public steht, ist von aussen einsehbar. Structs sind standardmäßig public,
//  deshalb mussten wir in der letzten Übung auch nicht public hinschreiben. (Das ist auch der
//  einzige Unterschied zu Klassen, diese sind nämlich standardmäßig private)

// TODO: Versuche in der main-Funktion auf alle Member des SomeClass-Objektes zuzugreifen,
//        und schau, was der compiler für Fehler ausgibt.

class SomeClass
{
private:
    int a;
    std::string sa;

public:
    int b;
    std::string sb;
};

int main(void)
{
    SomeClass s;
}