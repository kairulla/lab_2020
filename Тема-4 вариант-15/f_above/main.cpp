#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>

char func() {
    char q[] = "Функция вызвана"; 
    
    return q[];
}

int main() {
    double a = 0;
    double n = 0;
    double x = 0;
    double y = 0;
    char q;
    
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "a = ";
    std::cin >> a;
    n = (0.7 * pow(M_E, (x - 5))/sqrt(a * x * y));
    std::cout << std::endl << "n = " << n << std::endl;
    std::cout << q;
    return 0;
}
