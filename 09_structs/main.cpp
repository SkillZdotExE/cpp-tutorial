#include <iostream>

// Das ist ein struct. Structs sind eigene Datentypen.
// Dieses struct heißt Coordinate und hat die Member (variablen) x und y.
// Später im Code können wir nun "Coorcinate coord" schreiben, genau wie wir "int i" schreiben können.
// Eine Variable in einem struct nennt man MEMBER.
struct Coordinate
{
    int x;
    int y;
};

// TODO: Erstelle dein eigenes struct namens Pet
//       Es soll Member für Namen und Alter des Haustieres haben

int main(void)
{
    // Nun kann man ein Objekt des Typs Coordinate instanzieren:
    Coordinate coord;

    // Auf seine Member kann man mit dem . operator zugreifen:
    coord.x = 5;
    coord.y = 10;

    // Hat man einen Pointer auf ein Objekt, kann man mit dem -> Operator auf seine Member zugreifen:
    Coordinate *coordPtr = new Coordinate();

    coordPtr->x = 6;
    coordPtr->y = 11;

    Pet p;
    p.name = "Fido";
    p.age = 12;

    // TODO: Erstelle eine funktion printPet(Pet* p), die Namen und alter eines Pets in die Konsole schreibt.
    //       Rufe die Funktion hier auf das Pet p auf.

    delete coordPtr;
}