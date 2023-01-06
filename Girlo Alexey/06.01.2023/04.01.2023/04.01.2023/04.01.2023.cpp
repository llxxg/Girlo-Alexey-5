#include <iostream>
#include <cmath>
#include <numeric> 
#include <array>
#include <algorithm>
#include <vector>

#include <array>
#include <vector>
#include <list>
#include <queue>


#include <ctime>
#include <set>

using namespace std;

#include "Sum.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "Abs.h"
#include "Sqrt.h"
#include "Pow.h"
#include "Sin.h"
#include "Cos.h"
#include "Log.h"
#include "Fmod.h"


int main()
{

    setlocale(LC_ALL, "Ru-ru");
    std::cout << "Гирло Алексей" << std::endl;
    std::cout << "6 января 2023\n" << std::endl;
    long double n, m;
    short int numberA = 20;
    unsigned short int numberB = 5;
    int numberC = -35;
    unsigned int numberD = 9;
    long numberE = -870;
    float numberF = 4;
    long long numberG = 34;
    float numberX = -10.99;
    float numberJ = 4.4;
    float numberK = 7.5;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    long double resultOfSum = numberSum(numberA, numberB, numberC, numberD);
    std::cout << "Результат сложения чисел A,B,C,D = " << resultOfSum << std::endl;

    long double resultOfSub = numberSub(numberA, numberB, numberC, numberD);
    std::cout << "Результат вычитания чисел A,B,C,D = " << resultOfSub << std::endl;

    long double resultOfMul = numberMul(numberA, numberB);
    std::cout << "Результат умножения чисел A,B = " << resultOfMul << std::endl;

    long double resultOfDiv = numberDiv(numberA, numberB);
    std::cout << "Результат деление чисел A,B = " << resultOfDiv << std::endl;

    long double resultOfAbs = numberAbs(numberC);
    std::cout << "Результат asb(-35) = " << resultOfAbs << std::endl;

    long double resultOfSqrt = numberSqrt(numberD);
    std::cout << "Результат sqrt(9) = " << resultOfSqrt << std::endl;

    long double resultOfPow = numberPow(numberF, numberG);
    std::cout << "Результат pow(4,3) = " << resultOfPow << std::endl;

    long double resultOfSin = numberSin(numberC);
    std::cout << "Результат sin(35) = " << resultOfSin << std::endl;

    long double resultOfCos = numberCos(numberX);
    std::cout << "Результат cos(-10.99) = " << resultOfCos << std::endl;

    long double resultOfLog = numberLog(numberG);
    std::cout << "Результат log(3) = " << resultOfLog << std::endl;

    long double resultOfFmod = numberFmod(numberJ, numberK);
    std::cout << "Результат вычисление остатка fmod(4.4, 7.5) = " << resultOfFmod << std::endl;


    std::cout << "---------------------\n" << std::endl;

    multiset <long double> calculator = { resultOfSum, resultOfSub, resultOfMul, resultOfDiv, resultOfAbs, resultOfSqrt, resultOfPow, resultOfSin, resultOfCos, resultOfLog, resultOfFmod };
    multiset <long double> ::iterator test1 = calculator.begin();


    cout << "Random: " << std::endl;

    for (int i = 0; i < 10; i++) {
        long double random = rand() % 100 + 1;
        calculator.insert(random);
        cout << i + 1 << ") " << random << endl;
    }

    std::cout << "---------------------\n" << std::endl;

    multiset <long double> ::iterator calculator2 = calculator.begin();

    cout << "Отсорртированый калькулятор с Random: " << '\n';
    for (int i = 1; calculator2 != calculator.end(); i++, calculator2++) {
        //cout << *calculator2 << " ";
        cout << i + 1 << ") " << *calculator2 << endl;
    }


    std::cout << std::endl;
    std::cout << "Вычисления закончены" << std::endl;
    std::cout << std::endl;


   
    


    return 0;


    system("pause");
}