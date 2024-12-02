#include <iostream>
#include<math.h>
#include <bitset>

using namespace std;

void beauty(int N)
{
    cout.width(N);
    cout.fill(' ');
}

void Task_A()
{
    // x от -1 до 1 c шагом 0.2
    for (double x = -1; x <= 1; x += 0.2)
    {
        double y;

        if (-0.1 < x and x < 0.1)
        {
            x = 0;
        }
        if (x < 0)
        {
            y = 2 * pow(x, 3) * cos(pow(x, 2) + 1);
        }
        else
        {
            y = 2 * exp(pow(x, 0.5));
        }
        // cout.width(5);
        // cout.fill(' ');
        beauty(5);
        cout << x;
        beauty(10);
        // cout.width(10);
        // cout.fill(' ');
        cout.precision(3);
        cout << y << endl;
    }
}



void Task_B()
{
    char C[8];
    int N[8];

    cout << "Введите 8 символов: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> C[i];
        N[i] = C[i] - '0';
    }
    beauty(20);
    cout << "Символ\t";
    beauty(14);
    cout << "В восьмеричной\t";
    beauty(14);
    cout << "После изменения\t";
    beauty(14);
    cout << "Итоговой символ\n";
    for (int i = 0; i < 8; i++)
    {
        beauty(5);
        cout << C[i] << "\t";
        bitset<8> num(C[i]);
        beauty(14);
        cout << num << "\t";
        if (isupper(C[i]))
        {
            num[2] = false;
        }
        else
        {
            num[0] = true;
        }
        beauty(14);
        cout << num << "\t";
        beauty(14);
        cout << char(num.to_ulong()) << endl;
    }

}


int main()
{
    setlocale(LC_ALL, "RU");
    Task_A();
    Task_B();
}

