#include <iostream>
#include <string>

using namespace std;

int DigitN(string K, int N)
{
    for (int i = 0; i < K.length(); i++)
    {
        if (K.length() - i == N)
        {
            return K[i]-48;
        }
    }
    return -1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string stroka;
    int K;
    string a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите число - ";
        getline(cin, stroka);
        while (true)
        {
            try
            {
                K = stoi(stroka);
                if ((to_string(K) == stroka))
                {
                    a[i] = stroka;
                    break;
                }
                else
                {
                    throw logic_error("Число введено некорректно");
                }
            }
            catch (...)
            {
                cout << "Число введено некорректно. Введите число - ";
                getline(cin, stroka);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cout << j << " цифра числа " << a[i] << " равна - " << DigitN(a[i], j) << endl;
        }
        cout << endl;
    }
}