//Use of necessary resources
#define _USE_MATH_DEFINES 
#include <iostream>
#include <math.h>
//task 7
int main()
{
    double a, b, c, d, x1, x2; //Declaring variables
    //Output a string to the user and user input
    std::cout << "Enter a" << std::endl; 
    std::cin >> a; 
    std::cout << "Enter b" << std::endl;
    std::cin >> b;
    std::cout << "Enter c" << std::endl;
    std::cin >> c;

    d = b * b - 4 * a * c; //The formula for calculating the discriminant
//Provoding conditions for the discriminant using if
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
        std::cout << "There is no solution";
}S