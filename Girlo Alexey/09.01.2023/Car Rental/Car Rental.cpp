#include <iostream>
#include <cmath>
#include <numeric> 
#include <array>
#include <algorithm>

#include <iostream>
#include <conio.h>

using namespace std;

int login() {

    string password = "";
    char great;
    cout << endl << "Вход в систему" << endl;
    cout << endl << "ВВедите пароль: ";
    great = _getch();
    while (great != 13) {
        password.push_back(great);
        cout << '*';
        great = _getch();
    }

    if (password == "parol") {
        cout << endl << "Доступ предоставлен" << endl << endl;
        system("PAUSE");
        system("CLS");


    }

    else {
        cout << endl << "Повторите попытку " << ::endl << ::endl;
        system("PAUSE");
        system("CLS");
        login();
    }

    return 0;
}

struct Cars {
    

    string mark[5] = { "Hyundai","BMW","Toyota","Audi","Tesla"};

    string model[5] = { "Sonata","X5m","Yaris","E-tron GT","Model S Plaid"};

    string color[5] = { "Orange","satin black","Dark Blue (8W7)","Tactical Green Metallic","Midnight Silver Metallic"};

    string maxs_peed[5] = { "210 Km/h ","250 Km/h","180 Km/h","250 Km/h","322 Km/h"};

    int price[5] = { 100,200,300,500,200};

    int date[5] = { 2020,2021,2022,2023,2019};





};

struct Lessee {

    string Name[5];
    string Natio_ID[5];
    int payment_acc[5];
};


Cars car;
Lessee lessee;


void Minu()
{


    int num = 1;
    for (int i = 0; i < 5; ++i)
    {
        //cout << "---------------------" << endl;
        cout << num << "-" << car.mark[i] << endl;
        num++;
    }

}




void Details(int theChoice)
{
    system("CLS");
    cout << "---------------------" << endl;
    cout << "Вы выбрали - " << car.mark[theChoice - 1] << endl;
    cout << "---------------------" << endl;
    cout << "Модель : " << car.model[theChoice - 1] << endl;
    cout << "Цвет : " << car.color[theChoice - 1] << endl;

    cout << "Максимальная скорость : " << car.maxs_peed[theChoice - 1] << endl;
    cout << "Цена $ : " << car.price[theChoice - 1] << "K" << endl;


}



void check(int j)
{
    if (lessee.payment_acc[j] >= car.price[j])
        cout << endl << "Аренда получена" << endl;
    else
        cout << endl << "Аренда не доступна" << endl;

}

void user_input(int theChoice)
{
    system("CLS");
    int j = theChoice - 1;
    cout << "---------------------" << endl;
    cout << "Предоставте свои личные данные :" << endl;
    cout << "---------------------" << endl;
    cout << "Введите свое имя : ";
    cin >> lessee.Name[j];
    cout << "Введите свой ИИН : ";
    cin >> lessee.Natio_ID[j];
    cout << "Введите сумму платежа : ";
    cin >> lessee.payment_acc[j];


    check(j);
}


int main()
{
    setlocale(LC_ALL, "Ru-ru");
    int login();
    login();

    string decide = "yes";

    cout << "---------------------" << endl;
    cout << "Аренда автомобилей" << endl;
    cout << "Выберете машину из меню" << endl;
    cout << "---------------------" << endl << endl;

    while (decide != "Выход")
    {
        Minu();
        cout << endl << "Вы выбрали: ";
        int theChoice;
        cin >> theChoice;
        Details(theChoice);
        cout << endl << "Вы хотите арендовать эту машину? ";
        cin >> decide;

        if (decide == "yes") {
            user_input(theChoice);

            cout << endl << "Вы хотите продолжить? ";
            cin >> decide;


            if (decide == "no") break;
            system("CLS");
        }


        else {
            if (decide == "no")
            {
                system("CLS");
                continue;
            }
            else if (decide == "exit")
            {
                system("CLS");

                break;
            }



        }
    }


    return 0;
}

