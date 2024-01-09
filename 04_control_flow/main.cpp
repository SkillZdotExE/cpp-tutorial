#include <iostream>

int main(void)
{
    // IF, ELSE, und SWITCH-CASE

    int i = 0;

    std::cout << "Enter an integer: ";
    std::cin >> i;

    // Das sind if-, else-if- und else-Statements.
    // Wenn die Bedingung wahr ist, wird der Code in ihr ausgeführt
    // Wenn sie falsch ist, wird die nächste Bedingung evaluiert.
    if (i < 100)
    {
        std::cout << "The number is smaller than 100";
    }
    else if (i < 1000)
    {
        std::cout << "The number is smaller than 1000";
    }
    else
    {
        std::cout << "The number is greater than or equal to 1000";
    }

    // Das ist ein switch oder switch-case-Statement.
    // Es vergleicht einen Wert (hier i) mit mehreren Werten (0, 1, 2, 3, 4, 5)
    // Ist i gleich einem der Werte, wird der Code unter dem case ausgeführt.
    // Wenn keiner der cases true ist, wird der code unter dem default ausgeführt.
    // Mit break springt man aus dem switch case Statement
    std::cout << "The number is ";
    switch (i)
    {
    case 0:
        std::cout << "zero";
        break;
    case 1:
        std::cout << "one";
        break;
    case 2:
        std::cout << "two";
        break;
    case 3:
        std::cout << "three";
        break;
    case 4:
        std::cout << "four";
        break;
    case 5:
        std::cout << "five";
        break;
    default:
        std::cout << "greater than five or smaller than zero";
    }
    std::cout << '\n';

    // SCHLEIFEN

    // Das ist eine while-Schleife.
    // Der Code in ihr wird immer wieder ausgeführt, solange die Bedingung (i < 5) wahr ist.
    int i1 = 0;
    while (i1 < 5)
    {
        std::cout << "while " << i1 << '\n';
        i1 = i1 + 1;
    }

    // Das ist eine for-Schleife.
    // Sie hat die genau gleiche Funktion, wie der Code bei der while Schleife.
    for (int i2 = 0; i2 < 5; i2++)
    {
        std::cout << "for " << i2 << '\n';
    }

    // Es gibt auch noch die do-while-Schleife.
    // TODO: Finde selbst heraus, was der Unterschied zur while-Schleife ist!
    int i3 = 0;
    do
    {
        std::cout << "do-while " << i3 << '\n';
        i3 = i3 + 1;
    } while (i3 < 5);

    // TODO: Schreibe eine Schleife deiner Wahl, die den Benutzer so lang ganzzahlen eingeben lässt,
    //       bis eine ungerade negative Zahl eingegeben wird.
    // Tipp: Benutze den Modulo-Operator (%)
}