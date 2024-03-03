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
            cout << "�������� ������. ���������� �����\n"; cin >> numb;
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
        case 1://������� ������������ �� ������� � ������
            cout << "������� �������\n"; cin >> a;
            a = err(a);
            cout << "������� ������\n"; cin >> c;
            c = err(c);
            S = (c * a) / 2;
            break;
        case 2: // ������� ������������ �� ���� �������� 
            cout << "������� ������ �������\n"; cin >> a;
            a = err(a);
            cout << "������� ������ �������\n"; cin >> b;
            b = err(b);
            cout << "������� ������ �������\n"; cin >> c;
            while (c < 0 or (a + b) <= c) {
                cout << "�������� ������. ���������� �����\n"; cin >> c;
            }
            p = (a + b + c) / 2;
            S = sqrt(p * (p - a) * (p - b) * (p - c));
            break;
        case 3: // ������� ������������ �� ������� ��������� ���������� � ���������
            cout << "������� ������ ��������� ����������\n"; cin >> a;
            a = err(a);
            cout << "������� ��������\n"; cin >> b;
            b = err(b);
            S = (a * b) / 2;
            break;
        case 4: // ������� ������������ �� ���� �������� � ���� ����� ����
            cout << "������� ������ �������\n"; cin >> a;
            a = err(a);
            cout << "������� ������ �������\n"; cin >> b;
            b = err(b);
            cout << "������� ������ ����\n"; cin >> c;
            c = err(c);
            S = a * b * sin(c);
            break;
        }
        count++;
        cout << "������� �����: " << S << endl;
    }

    static void square() // ������� �������� �� ����� �������
    {
        double a;
        cout << "������� �������\n"; cin >> a;
        a = err(a);
        S = a * a;
        count++;
        cout << "������� �����: " << S << endl;
    }

    static void rhombus() //������� ����� �� ����� ������� � ������
    {
        double a = 0;
        double h = 0;
        cout << "������� �������\n"; cin >> a;
        a = err(a);
        cout << "������� ������\n"; cin >> h;
        h = err(h);
        S = a * h;
        count++;
        cout << "������� �����: " << S << endl;
    }

    static void rectangle() //������� ��������������
    {
        double a = 0;
        double b = 0;
        cout << "������� ������ �������\n"; cin >> a;
        a = err(a);
        cout << "������� ������ �������\n"; cin >> b;
        b = err(b);
        S = a * b;
        count++;
        cout << "������� �����: " << S << endl;
    }

    static void numb()
    {
        cout << "�������� ��������: " << count << endl;
    }
};
int geometry::count = 0;
double geometry::S = 0;