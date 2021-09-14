#include<iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Rus");
    //Task 1

    {
        cout << "Введите число: ";
        cout << "\n";
        int a, b;
        cout << "\n";
        cout << "Первое число: ";
        cin >> a;
        cout << "\n";
        cout << "Второе число: ";
        cin >> b;
        cout << "\n";
        if (a + b >= 10 && a + b <= 20)
        {
            cout << "true" << "\n\n"; // a, b если больше или равно 10.
        }                // если a, b меньше или равно 20.       
        else
        {
            cout << "false" << "\n\n"; // иначе.
        }

    }

    //Tsak 2

    const int d = 3;
    const int s = 7;
    if ((d + s == 10) || (d == 10 && s == 10))
    {
        cout << "true" << "\n\n"; // сумма двух целочисленных констант равна десяти.
    }
    else
    {
        cout << "false" << "\n\n"; // иначе.
    }

    //Task 3

    for (int i = 1; i <= 50; i = i + 2)
    {
        cout << "Your numbers: " << i << "\n"; //Список всех нечетных чисел от 1 до 50.         
    }   cout << endl;

    //Task 4       

    {
        bool Калькулятор_Табулятор;
        Калькулятор_Табулятор = true;
        int a;
        cout << "Введите число и я скажу вам простое оно или же сложное:" << endl;
        cin >> a;
        for (int b = 2; b <= a / 2; b++)
        {
            if (a % b == 0)
            {
                Калькулятор_Табулятор = false;
                break;
            }
        }
        if ((Калькулятор_Табулятор) && (a > 1)) cout << "Простое:)" << endl;
        else cout << "Сложное:(" << endl;
    }

    //Task 5   

    {
        int a;
    label1:
        cout << "Введите год от 1 до 3000: " "\n";
        cin >> a;

        if ((a < 1) || (a > 3000))
            goto label1;

        if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)) cout << "Високосный год" << "\n";

        else cout << "Обычный год" << "\n";
    }
    return 0;
};