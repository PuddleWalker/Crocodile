#pragma once

class geometry
{
private:
    static int count;
    static double S;
public:

    static double triangle1() /*������� ������������ �� ������� � ������*/
    {
        double a;
        double h;
        S = (h * a)/2;
        count++;
        return S;
    }

    static double triangle2() // ������� ������������ �� ���� �������� 
    {
        double a;
        double b;
        double c;
        double p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        count++;
        return S;
    }

    static double triangle3() // ������� ������������ �� ������� ��������� ���������� � ���������
    {
        double p;
        double R;
        S = (p * R) / 2;
        count++;
        return S;
    }

    static double triangle4() // ������� ������������ �� ���� �������� � ���� ����� ����
    {
        double a;
        double b;
        double y;
        S = a * b * sin(y);
        count++;
        return S;
    }

    static double square() // ������� �������� �� ����� �������
    {
        double a;
        S = a * a;
        count++;
        return S;
    }

    static double rhombus() //������� ����� �� ����� ������� � ������
    {
        double a = 0;
        double h = 0;
        S = a * h;
        count++;
        return S;
    }

    static double rectangle() //������� ��������������
    {
        double S;
        double a = 0;
        double b = 0;
        S = a * b;
        count++;
        return S;
    }

    static int numb()
    {
        return count;
    }
};

