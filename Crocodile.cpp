//#include <iostream>
//#include <math.h>
//#include "geometry.h"
//#include <windows.h>
//
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int cond = 1;
//	int cond2;
//	while (cond != 0) {
//		cout << R"(Программа для подсчёта площади геометрических фигур
//Выберите действие:
//0 - Выйти
//1 - Вчислить площадь треугольника
//2 - Вчислить площадь квадрата
//3 - Вчислить площадь ромба
//4 - Вчислить площадь прямоугольника
//5 - Вывести количество посчетов площадей
//)"; cin >> cond;
//		switch (cond) {
//		case 0:
//			break;
//		case 1:
//			cout << R"(Выберите способ вычисления:
//1 - По стороне и высоте
//2 - По трем сторонам 
//3 - По радиусу вписанной окружности и периметру
//4 - По двум сторонам и углу между ними
//)"; cin >> cond2;
//			while (cond2 > 4 or cond2 < 1)
//			{
//				cout << "Несуществующий вариант. Попробуйте снова" << endl; cin >> cond2;
//			}
//			geometry::triangle(cond2);
//			break;
//		case 2:
//			geometry::square();
//			break;
//		case 3:
//			geometry::rhombus();
//			break;
//		case 4:
//			geometry::rectangle();
//			break;
//		case 5:
//			geometry::numb();
//			break;
//		default:
//			cout << "Неверное действие. Попробуйте снова\n";
//		}
//		system("pause");
//		system("cls");
//	}
//}
