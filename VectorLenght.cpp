﻿// VectorLenght.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
public:
	Vector() : x(4), y(8), z(9) //Значение координат вектора по умолчанию
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)//Конструктор с аргументами
	{}

	void Show() //Вывод заданных координат вектора
	{
		cout << "xyz =" << " " << x << " " << y << " " << z;
	}
	void VectorLenght()// Вычисление и ввод длины вектора
	{
		int Lenght = sqrt(x * x + y * y + z * z);
		cout << "Lenght =" << " " << Lenght;
	}
private:
	//Координаты вектора(переменные)
	double x;
	double y;
	double z;
};

int main()
{
	Vector v;
	v.VectorLenght();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
