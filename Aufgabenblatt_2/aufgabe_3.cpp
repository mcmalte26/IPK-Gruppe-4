#include <iostream>

int iterative(int q, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int intermediateResult = q;
    for (int i = 1; i < n; i++)
    {
        intermediateResult = intermediateResult * q;
    }
    return intermediateResult;
}

int optimizedIterative(int q, int n)
{
    if (n % 2 == 0)
    {
        int value = iterative(q, n / 2);
        return value * value;
    }
    int value = iterative(q, (n - 1) / 2);
    return value * value * q;
}

int recursive(int q, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return q;
    }
    return q * recursive(q, n - 1);
}

int main()
{
    std::cout << "Geben Sie einen Wert für die Basis an: ";
    int base;
    std::cin >> base;

    std::cout << "Geben Sie einen Wert für den Exponenten an: ";
    int exponent;
    std::cin >> exponent;
    if (exponent < 0)
    {
        std::cout << "Der Exponent muss eine positive natürliche Zahl sein." << std::endl;
        return 1;
    }
    std::cout << "Ergebnis: " << base << "^" << exponent << " = " << optimizedIterative(base, exponent) << std::endl;
    return 0;
}