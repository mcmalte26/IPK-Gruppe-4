#include <iostream>

void collatz(int number)
{
    std::cout << "Ausgewaehlte Zahl: " << number << std::endl;
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
    }
    std::cout << "Endergebnis: " << number << std::endl;
    return;
}

int main()
{
    std::cout << "Bitte geben Sie eine Zahl ein." << std::endl;

    int number;
    std::cin >> number;

    collatz(number);
    return 0;
}