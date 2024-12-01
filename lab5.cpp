#include <iostream>
#include<math.h>
#include <iomanip>
#include <bitset>

using namespace std;



void Task_A()
{
    // x от -1 до 1 c шагом 0.2
    for (double x = -1; x <= 1; x += 0.2)
    {
        double y;

        if (x < 0)
        {
            y = 2 * pow(x, 3) * cos(pow(x, 2) + 1);
        }
        else
        {
            y = 2 * exp(pow(x, 1 / 2));
        }

        cout << x << "\t" << y << setprecision(4) << cout.width(5)  << endl;
    }
    cout << (0.4 - 0.2)-0.2 << endl;
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
    cout << "Символ\tВ восьмеричной\tПосле изменения\tИтоговой символ\n";
    for (int i = 0; i < 8; i++)
    {   
        cout << C[i] <<"\t";
        bitset<8> num(C[i]);
        cout << num << "\t";
        if (isupper(C[i]))
        {
            num[2] = false;
        }
        else
        {
            num[0] = true;
        }
        cout << num << "\t";
        cout << char(num.to_ulong())<< endl;
    }

}


int main()
{
    setlocale(LC_ALL, "RU");
    Task_A();
    Task_B();
}

