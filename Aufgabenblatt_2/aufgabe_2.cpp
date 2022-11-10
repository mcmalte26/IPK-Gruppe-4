#include <iostream>
#include <vector>

long long fibonacci(int number)
{
    std::vector<unsigned long long> fibonacciNumbers;
    std::cout << "Fibonacci-Folge bis n = " << number << ": " << std::endl;

    fibonacciNumbers.push_back(0);
    fibonacciNumbers.push_back(1);
    std::cout << "0 1 ";
    for (int n = 2; n <= number; n++)
    {

        fibonacciNumbers.push_back(fibonacciNumbers[n - 2] + fibonacciNumbers[n - 1]);
        if (fibonacciNumbers[n] < 0)
        {
            std::cout << n;
        }
        std::cout << fibonacciNumbers[n] << " ";
    }
    return fibonacciNumbers.back();
}

int main()
{
    std::cout << "Bis zu welcher Stelle n möchten sie die Fibonacci-Folge sehen? ";
    int n;
    std::cin >> n;
    if (n < 0)
    {
        std::cout << "Fehler: n darf nicht negativ sein." << std::endl;
        return 1;
    }

    fibonacci(n);
    return 0;
}