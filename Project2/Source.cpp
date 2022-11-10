#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
//task 7 (7. Найти корни квадратного уравнения.)
int main()
{
    double a, b, c, d, x1, x2; //Объявим переменные

    std::cout << "Enter a" << std::endl;
    std::cin >> a;
    std::cout << "Enter b" << std::endl;
    std::cin >> b;
    std::cout << "Enter c" << std::endl;
    std::cin >> c;

    d = b * b - 4 * a * c; //Формула подсчета дискриминанта
    //Предусмотрим условия для дискриминанта
    if (d > 0) 
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    if (d == 0) 
    {
        x1 = -(b / (2 * a));
        std::cout << "x1 = x2 = " << x1 << std::endl;
    }
    if (d < 0) 
        std::cout;
}