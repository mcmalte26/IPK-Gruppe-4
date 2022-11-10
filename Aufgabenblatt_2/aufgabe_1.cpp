#include <iostream>

void collatz(int number)
{
    std::cout << "Input wird nun nach den Regeln der Collatz-Vermutung bearbeitet:" << std::endl;
    while (number != 1 && number != 0 && number != -1 && number != -5 && number != -17)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = number * 3 + 1;
        }
        std::cout << number << " ";
    }
    std::cout << std::endl
              << "-> Abbruchbedingung " << number << " erreicht!" << std::endl;
    return;
}

int main()
{
    std::cout << "Bitte geben Sie eine Zahl ein: ";
    ;

    int inputNumber;
    std::cin >> inputNumber;

    collatz(inputNumber);
    return 0;
}