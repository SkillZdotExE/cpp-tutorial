#include <iostream>
#include <string>

int main(void)
{
    // Das ist eine variable vom Typ int
    // Sie hat den Wert 5
    int i = 5;

    // Das ist eine variable vom Typ int* (pointer auf einen int-Wert)
    // Ihr Wert ist die Speicheradresse von i. Ein Pointer ist also nichts anderes als eine Speicheradresse.
    // Ein Pointer "zeigt" auf einen Wert
    // i ist der Wert von i, &i ist die Speicheradresse von i.
    int *iPtr = &i;

    // Das ist eine variable vom Tp int& (reference auf einen int-Wert)
    // Im Hintergrund ist sie nichts anderes als ein Pointer, aber kann verwendet werden,
    //  als wäre sie selbst die int-variable die sie referenziert
    int &iRef = i;

    // Referenzen müssen immer ein Objekt referenzieren, anders als pointer

    int *invalidPtr;
    // int &invalidRef; // Error!

    // Das ist die Adresse, auf die der Pointer zeigt.
    std::cout << "Adress the pointer points to: " << iPtr << '\n';

    // Will man den Wert haben, auf den der Pointer zeigt, benutzt an den *-operator:
    std::cout << "Value the pointer points to: " << *iPtr << '\n';

    // Das ist der Wert, auf die die Referenz verweist.
    // Wie man sieht, kann die Referenz wie eine normale variable vom Typ int verwendet werden.
    std::cout << "Value the reference points to: " << iRef << '\n';

    // Wichtig: Ändert man den Wert auf den der Pointer zeigt, ändert sich der Wert logischerweise
    //          auch für alle anderen Pointer auf diese variable

    // Man kann pointer auf jeden Typ erstellen:
    double *dPtr;
    std::string *sPtr;

    // TODO: Schreibe eine switchValues-Funktion, die zwei int* akzeptiert, und die Werte auf die sie zeigen tauscht

    int a = 5;
    int b = 10;
    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << "Pointer values before switching: " << *aPtr << " and " << *bPtr << '\n';

    switchValues(aPtr, bPtr);

    std::cout << "Pointer values after switching: " << *aPtr << " and " << *bPtr << '\n';
}