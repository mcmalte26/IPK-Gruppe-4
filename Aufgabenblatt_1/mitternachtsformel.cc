#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
    double a, b, c = 0;

    std::cout << "a = " << std::flush;
    std::cin >> a;

    std::cout << "b = " << std::flush;
    std::cin >> b;

    std::cout << "c = " << std::flush;
    std::cin >> c;

    double diskriminante = (b * b - 4 * a * c);
    if (a == 0)
    {
        std::cout << "Eingegebene Funktion ist keine quadratische Gleichung." << std::endl;
    }
    else if (diskriminante < 0)
    {
        std::cout << "Eingegebene Funktion hat keine Lösung." << std::endl;
    }
    else if (diskriminante == 0)
    {
        double ns = -b / 2 * a;
        std::cout << "Eingegebene Funktion hat genau eine Lösung: " + std::to_string(ns) + "." << std::endl;
    }
    else
    {
        double ns1 = (-b + std::sqrt(diskriminante)) / (2 * a);
        double ns2 = (-b - std::sqrt(diskriminante)) / (2 * a);
        std::cout << "Eingegebene Funktion hat zwei Lösungen: " + std::to_string(ns1) + " und " + std::to_string(ns2) + "." << std::endl;
    }
}