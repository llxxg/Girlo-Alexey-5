#include <iostream>
#include <cmath>
#include <numeric> 
#include <array>
#include <algorithm>

#include <vector>

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
    std::cout << "4 января 2023\n" << std::endl;

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


    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    std::cout << "---------------------\n" << std::endl;

    std::array<long double, 11> arr{resultOfSum, resultOfSub, resultOfMul, resultOfDiv, resultOfAbs, resultOfSqrt, resultOfPow, resultOfSin, resultOfCos, resultOfLog, resultOfFmod};

    for (int i = 0; i < 11; i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

    std::sort(std::begin(arr), std::end(arr));

    for (int i = 0; i < 11; i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "--------------\n" << std::endl;

    std::sort(std::rbegin(arr), std::rend(arr));

    for (int i = 0; i < 11; i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "--------------\n" << std::endl;

    int arr1[] = {3, 7, 2, 5, 6, 4, 9, 11, 34, 20, 7};

    std::cout << "min_element = " << *std::min_element(arr1, arr1 + 11) << '\n';
    std::cout << "max_element = " << *std::max_element(arr1, arr1 + 11) << '\n';

    std::cout << "--------------\n" << std::endl;

    vector<int> arr2{3, 7, 2, 5, 6, 4, 9, 11, 34, 20, 7}; //vector
    
    cout << "Частичная сортировка 2 чисел: \n";

    partial_sort(arr2.begin(), arr2.begin() + 2, arr2.end());

    for (int i = 0; i < arr2.size(); ++i)
        cout << arr2[i] << " " << std::endl;

    std::cout << "--------------\n" << std::endl;

    int length = 11;
    int index = 3;

    cout << "Исходный массив: ";
    for (int i = 0; i < length; ++i)
        cout << arr[i] << " ";
    cout << endl;

    index--;  
    for (int i = index; i < length - 1; ++i)
        arr[i] = arr[i + 1];
    length--; 

        cout << "Массив, после удаление 3-его элемента: ";
    for (int i = 0; i < length; ++i)
        cout << arr[i] << " ";

    std::cout << "--------------\n" << std::endl;
    


    return 0;


    system("pause");
}