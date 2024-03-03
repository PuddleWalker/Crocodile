#pragma once

using namespace std;

class geometry
{
private:
    static int count;
    static double S;
public:
    static double err(double numb)
    {
        while (numb < 0) {
            cout << "Неверный размер. Попробуйте снова\n"; cin >> numb;
        }
        return numb;
    }

    static void triangle(int num)
    {
        double a = 0;
        double b = 0;
        double c = 0;
        double p = 0;
        switch (num) {
        case 1://площадь треугольника по стороне и высоте
            cout << "Введите сторону\n"; cin >> a;
            a = err(a);
            cout << "Введите высоту\n"; cin >> c;
            c = err(c);
            S = (c * a) / 2;
            break;
        case 2: // площадь треугольника по трем сторонам 
            cout << "Введите первую сторону\n"; cin >> a;
            a = err(a);
            cout << "Введите вторую сторону\n"; cin >> b;
            b = err(b);
            cout << "Введите третью сторону\n"; cin >> c;
            while (c < 0 or (a + b) <= c) {
                cout << "Неверный размер. Попробуйте снова\n"; cin >> c;
            }
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            break;
        case 3: // площадь треугольника по радиусу вписанной окружности и периметру
            cout << "Введите радиус вписанной окружности\n"; cin >> a;
            a = err(a);
            cout << "Введите перимитр\n"; cin >> b;
            b = err(b);
            S = (a * b) / 2;
            break;
        case 4: // площадь треугольника по двум сторонам и углу между ними
            cout << "Введите первую сторону\n"; cin >> a;
            a = err(a);
            cout << "Введите вторую сторону\n"; cin >> b;
            b = err(b);
            cout << "Введите размер угла\n"; cin >> c;
            c = err(c);
            S = a * b * sin(c);
            break;
        }
        count++;
        cout << "Площадь равна: " << S << endl;
    }

    static void square() // площадь квадрата по длине стороны
    {
        double a;
        cout << "Введите сторону\n"; cin >> a;
        a = err(a);
        S = a * a;
        count++;
        cout << "Площадь равна: " << S << endl;
    }

    static void rhombus() //площадь ромба по длине стороны и высоте
    {
        double a = 0;
        double h = 0;
        cout << "Введите сторону\n"; cin >> a;
        a = err(a);
        cout << "Введите высоту\n"; cin >> h;
        h = err(h);
        S = a * h;
        count++;
        cout << "Площадь равна: " << S << endl;
    }

    static void rectangle() //площадь прямоугольника
    {
        double a = 0;
        double b = 0;
        cout << "Введите первую сторону\n"; cin >> a;
        a = err(a);
        cout << "Введите вторую сторону\n"; cin >> b;
        b = err(b);
        S = a * b;
        count++;
        cout << "Площадь равна: " << S << endl;
    }

    static void numb()
    {
        cout << "Посчётов площадей: " << count << endl;
    }
};
int geometry::count = 0;
double geometry::S = 0;