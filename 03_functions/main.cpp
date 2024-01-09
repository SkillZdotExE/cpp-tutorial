#include <iostream>

// Das ist eine Funktion namens sayHi.
// Sie gibt keinen Wert zurück (void).
// Sie nimmt auch keine Argumente (leere Klammern).
// Sie kann nun mit "sayHi()" aufgerufen werden.
void sayHi()
{
    std::cout << "Hi!\n";
}

// Diese Funktion heißt add.
// Sie muss mit zwei Argumenten vom Typ int aufgerufen werden, z.B. "add(2,3)"
// Da die Funktion einen int-Wert zurück gibt, kann sie wie eine Zahl im Code verwendet werden:
// "int sum = add(2,3);"
int add(int a, int b)
{
    return a + b;
}

// TODO: Erstelle deine eigene Funktion namens square. Sie soll einen float-Wert quadrieren.

int main(void)
{
    // sayHi aufrufen:
    sayHi();

    // add aufrufen:
    int sum = add(2, 3);

    // square ist noch nicht implementiert!
    std::cout << "3.16 ^ 2 = " << square(3.16) << '\n';
}