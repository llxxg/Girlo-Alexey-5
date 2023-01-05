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
    std::cout << "5 января 2023\n" << std::endl;
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


    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    std::cout << "---------------------\n" << std::endl;

    std::cout << "Вывод результата в vector" << std::endl;
    vector <long double> text(11);
    text[0] = resultOfSum;
    text[1] = resultOfSub;
    text[2] = resultOfMul;
    text[3] = resultOfDiv;
    text[4] = resultOfAbs;
    text[5] = resultOfSqrt;
    text[6] = resultOfPow;
    text[7] = resultOfSin;
    text[8] = resultOfCos;
    text[9] = resultOfLog;
    text[10] = resultOfFmod;
    for (int i = 0; i < 11; i++) {
        std::cout << text[i] << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

    std::cout << "Вывод результата в list" << std::endl;
    std::list<long double> this_list(text.begin(), text.end());
    for (long double& i : this_list) {
        std::cout << i << " " << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

    std::cout << "Вывод результата в circular buffer" << std::endl;
    std::vector<long double> this_vector(this_list.begin(), this_list.end());
    for (long double& i : this_vector) {
        std::cout << i << " " << std::endl;
    }

    std::cout << "---------------------\n" << std::endl;

    int switch_on = 0;
    std::cout << "1. Добавление m элемента после n элемента" << std::endl;
    std::cout << "2. Удаление последнего элемента" << std::endl;
    std::cout << "3. Clear all" << std::endl;
    std::cout << "4. Удалить с m элемента до последнего" << std::endl;
    std::cout << "5. Добавления элементов в начало и конец" << std::endl;
    std::cout << "6. Swap " << std::endl;
    std::cout << std::endl;
    std::cout << "Вы выбрали: ";
    std::cin >> switch_on;
    std::cout << std::endl;

    //--------------------------------------------

    switch (switch_on)
    {
    case 1: {
        std::cout << "Добавляем m элемент после n элемента" << std::endl;
        std::cout << "Введите m: ";
        std::cin >> m;
        std::cout << "Введите n: ";
        std::cin >> n;
        auto iter1 = text.cbegin();
        text.insert(iter1 + n, m);
        for (int i = 0; i < 11; i++) {
            std::cout << text[i] << std::endl;
        }
    }
          break;
    case 2: {
        std::cout << "Удаление последнего элемента" << std::endl;
        text.pop_back();
        for (int i = 0; i < 11; i++) {
            std::cout << text[i] << std::endl;
        }
    }
    case 3: {
        std::cout << "Clear" << std::endl;
        text.clear();
    }
          break;
    case 4: {
        std::cout << "Удаление последнего  m элемента до последнего" << std::endl;
        int m;
        std::cout << "Введите число: ";
        std::cin >> m;
        text.erase(text.begin() + m, text.end() - 1); 
        for (int i = 0; i < m; i++) {
            std::cout << text[i] << std::endl;
        }
    }
          break;
    case 5: {
        std::cout << "Дабавление элемента в начало: ";
        std::cin >> n;
        std::cout << "Добавлене элемента в конец: ";
        std::cin >> m;
        std::cout << "Добавили элемент в начало и в конец" << std::endl;
        text.insert(text.begin(), n);  
        text.insert(text.end(), m);  
        for (int i = 0; i < text.size(); i++) {
            cout << text[i] << " " << std::endl;
        }
    }
          break;
    case 6: {
        std::cout << "Swap this_list && this_list2" << std::endl;
        std::list<long double> this_list2 = { 6, 7, 8, 9 };
        this_list.swap(this_list2);
        for (long double& i : this_list) {
            std::cout << i << " " << std::endl;
        }
    }
          break;
    default:
        std::cout << "error" << std::endl;
        std::cout << "Вычисления не закончены!" << std::endl;

        break;
    }


    std::cout << std::endl;
    std::cout << "Вычисления закончены" << std::endl;
    std::cout << std::endl;


   
    


    return 0;


    system("pause");
}