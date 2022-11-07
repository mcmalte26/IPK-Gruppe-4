#include <iostream>

long long fibonacci(int number)
{
    // Iternative Methode ist deutlich schneller als rekursive Methode (Funktion ruft sich selbst wieder auf und berechnet n-te Fibonaccizahl)
    long long fibonacciNumber = 0;
    long long lastFibonacciNumber = 0;
    long long penultimateFibonacciNumber = 1;

    std::cout << "Fibonacci-Folge bis n = " << number << ": " << std::endl
              << lastFibonacciNumber << " ";
    for (int i = 0; i <= number; i++)
    {
        fibonacciNumber = lastFibonacciNumber + penultimateFibonacciNumber;
        penultimateFibonacciNumber = lastFibonacciNumber;
        lastFibonacciNumber = fibonacciNumber;
        std::cout << fibonacciNumber << " ";
    }
    return fibonacciNumber;
}

int main()
{
    std::cout << "Geben Sie einen Wert für n an: ";
    int n;
    std::cin >> n;

    if (n > 91)
    {
        std::cout << "Fehler: n darf nicht größer als 91 sein, da das Ergebnis sonst außerhalb des Wertebereichs des verwendeten Datentyps long long liegen würde." << std::endl;
        return 1;
    }
    if (n < 0)
    {
        std::cout << "Fehler: n darf nicht negativ sein." << std::endl;
        return 1;
    }

    fibonacci(n);
    return 0;
}