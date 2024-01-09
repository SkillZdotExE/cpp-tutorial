#include <iostream>

// Überladen sind zwei Funktionen dann, wenn sie den gleichen Namen haben.
// Das ist nur möglich, wenn sie verschiedene Argumenttypen haben.
int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main(void)
{
    std::cout << "adding ints: 2+5 = " << add(2, 5) << '\n';
    std::cout << "adding floats: 2.0+5.0 = " << add(2.0, 5.0) << '\n';

    // TODO: Implementiere eine dritte add-Variante für strings.
    //       Diese soll den zweiten string an den ersten anhängen.
    std::cout << "adding strings: \"Hello \" + \"World!\" = " << add("Hello ", "World!") << '\n';
}