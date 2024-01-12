#include <iostream>

int main(void)
{
    // Um einen int-Pointer auf den Wert 5 zu erstellen, haben wir bis jetzt das gemacht:
    int a = 5;
    int *aPtr = &a;

    // Man kann pointer aber auch direkt erstellen: Mit "new"
    int *bPtr = new int(5);

    // Aber Achtung: Alles was mit new erstellt wird, muss später mit delete gelöscht werden
    delete bPtr;

    // Tut man das nicht, entstehen Memory leaks:
    // TODO: Öffne den Task-Manager, führe das Program aus und beobachte den benutzten Arbeitsspeicher des Programs!
    while (true)
    {
        int *ptr = new int(5);
        std::cout << "Im saying " << *ptr << "!\n";
    }
}