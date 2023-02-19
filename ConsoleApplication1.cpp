#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Введите номер формулы от 1 до 30 " << endl;
    int a;
    cin >> a;

    switch (a)
    {
    case 1:
    {
        try
        {
            double t, l;
            cout << "Введите значение переменной t " << endl;
            cin >> t;
            cout << "Введите значение переменной l " << endl;
            cin >> l;
            cout << "R=" << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 2:
    {
        try
        {
            double p, y;
            cout << "Введите значение переменной p " << endl;
            cin >> p;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "K=" << log(pow(p, 2) + pow(y, 3) + exp(p)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 3:
    {
        try
        {
            double n, y;
            cout << "Введите значение переменной n " << endl;
            cin >> n;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "G=" << n * (y + 3.5) + sqrt(y) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 4:
    {
        try
        {
            double a, t;
            cout << "Введите значение переменной a " << endl;
            cin >> a;
            cout << "Введите значение переменной t " << endl;
            cin >> t;
            cout << "D=" << 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 2)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 5:
    {
        try
        {
            double x;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "L=" << 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 6:
    {
        try
        {
            double y, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "M=" << cos(2 * y) + 3.6 * exp(x) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 7:
    {
        try
        {
            double m;
            cout << "Введите значение переменной m " << endl;
            cin >> m;
            cout << "N=" << pow(m, 2) + 2.8 * fabs(m) + 0.55 << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 8:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "T=" << sqrt(fabs(6 * pow(y, 2) - 0.1 * y + 4)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 9:
    {
        try
        {
            double y, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "V=" << log(y + 0.95) + sin(pow(x, 4)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 10:
    {
        try
        {
            double y, k, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной k " << endl;
            cin >> k;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "U=" << exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 11:
    {
        try
        {
            double y, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "S=" << 9.756 * pow(y, 7) + 2 * tan(x) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 12:
    {
        try
        {
            double t, x;
            cout << "Введите значение переменной t " << endl;
            cin >> t;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "K=" << 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2 << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 13:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "E=" << sqrt(fabs(3 * pow(y, 2) + 0.5 * y + 4)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 14:
    {
        try
        {
            double y, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "R=" << fabs(sqrt(pow(sin(y), 2) + exp(x))) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 15:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "H=" << sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 16:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "S=" << sqrt(cos(4) * pow(y, 2) + 7.151) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;

            system("pause");
        }
    }
    break;
    case 17:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "N=" << 3 * pow(y, 2) + sqrt(y + 1) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 18:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Z=" << 3 * pow(y, 2) + sqrt(pow(y, 3) + 1) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;

            system("pause");
        }
    }
    break;
    case 19:
    {
        try
        {
            double y, n, g;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной n " << endl;
            cin >> n;
            cout << "Введите значение переменной g " << endl;
            cin >> g;
            cout << "P=" << n * sqrt(pow(y, 3) + 1.09 * g) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 20:
    {
        try
        {
            double y, k, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной k " << endl;
            cin >> k;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "U=" << exp(k + y) + tan(x) * sqrt(y) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 21:
    {
        try
        {
            double y, h;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной h " << endl;
            cin >> h;
            cout << "P=" << exp(y + 5.5) + 9.1 * pow(h, 3) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 22:
    {
        try
        {
            double y, u, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной u " << endl;
            cin >> u;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "T=" << sin(2 * u) * log(2 * pow(y, 2) + sqrt(x)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 23:
    {
        try
        {
            double y, f;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной f " << endl;
            cin >> f;
            cout << "G=" << exp(2 * y) + sin(f) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 24:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "F=" << 2 * sin(0.214 * pow(y, 5) + 1) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 25:
    {
        try
        {
            double y, f;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной f " << endl;
            cin >> f;
            cout << "G=" << exp(2 * y) + sin(pow(f, 2)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 26:
    {
        try
        {
            double p;
            cout << "Введите значение переменной p " << endl;
            cin >> p;
            cout << "Z=" << sin(pow(pow(p, 2) + 0.4, 3)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 27:
    {
        try
        {
            double y, v, x;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной v " << endl;
            cin >> v;
            cout << "Введите значение переменной x " << endl;
            cin >> x;
            cout << "W=" << 1.03 * v + exp(2 * y) + tan(fabs(x)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 28:
    {
        try
        {
            double y, h;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной h " << endl;
            cin >> h;
            cout << "T=" << exp(y + h) + sqrt(fabs(6.4 * y)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 29:
    {
        try
        {
            double y;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "N=" << 3 * pow(y, 2) + sqrt(fabs(y + 1)) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;
    case 30:
    {
        try
        {
            double y, r;
            cout << "Введите значение переменной y " << endl;
            cin >> y;
            cout << "Введите значение переменной r " << endl;
            cin >> r;
            cout << "W=" << exp(y + r) + 7.2 * sin(r) << endl;
        }
        catch (const std::exception&)
        {
            cout << "Ошибка входных данных" << endl;
        }
        system("pause");
    }
    break;

    default: cout << "Неправильно выбран номер формулы";
    }
}