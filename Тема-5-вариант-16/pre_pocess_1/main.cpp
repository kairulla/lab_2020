#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

double amount(double a);
double composition(double d, double m);

int main() {
    double a = 0, d = 0, m = 0, y = 0;//Объявил переменные
    cout << "Введите параметры D, M, A" << endl << "D = ";//Ввод данных
    cin >> d;
    cout << endl << "M = ";
    cin >> m;
    cout << endl << "A = ";
    cin >> a;
    cout << endl;
///////////////////////////////////////////////////////////////////////////////
    
    y = composition(d, m) / amount(a); //Решение уравнения
    
    cout << "Решение Y" << endl << "Y = " << y << endl; //Вывод решения
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////

double composition(double d, double m) {//Вычисляет числитель
    int k = 1;
    double result_composition = 0, result_multiply = 1;
    while (k < 5) {
        result_multiply *= k + d;
        k++;
    }
    result_composition = result_multiply + m;
    return result_composition;
}
///////////////////////////////////////////////////////////////////////////////

double amount(double a) {//Высчитывает знаменатель
    int result_sum = 0, i = 1;
    double result_amount = 0;
    do {//Цикл вычисляет сумму
        result_sum += i + 5;
        i++;
    }    while (i < 4);
    result_amount = result_sum + a * a;

    return result_amount;
}
