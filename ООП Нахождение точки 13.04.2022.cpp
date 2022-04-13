#include <iostream>
#include <cmath>

using namespace std;

const size_t SIZE = 100;

//------------------------------------------------------------------------- Одна точка

class point
{
public:
	point(); //Конструктор по умолчанию
	point(int x, int y);
	int get_x(); //Геттер
	int get_y();
	void show(); //Инспектор
private:
	int _x;
	int _y;
};

point::point()
{
	_x = 0;
	_y = 0;
}

point::point(int x, int y)
{
	_x = x;
	_y = y;
}

int point::get_x()
{
	return _x;
}

int point::get_y()
{
	return _y;
}

void point::show()
{
	std::cout << _x << " - " << _y << std::endl;
}

//------------------------------------------------------------------------- Массив точек

class points
{
public:
	points();
	void set_point(point pnt);
	void show();
	void find();
private:
	point _points[SIZE];
	size_t _index;
	double midDis[SIZE];
	double minNum;
	int minIndex;
};

points::points()
{
	_index = 0;
	for (int i = 0; i < SIZE; i++)
	{
		midDis[i] = 0;
	}
	minNum = 0;
	minIndex = 0;
}

void points::set_point(point pnt)
{
	if (_index < SIZE)
	{
		_points[_index] = pnt;
		_index++;
	}
}

void points::show()
{
	for (size_t i = 0; i < SIZE; i++)
		_points[i].show();
}

void points::find()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < (SIZE - 1); j++)
		{
			/*int x1 = _points[i].get_x();
			int x2 = _points[j].get_x();
			int y1 = _points[i].get_y();
			int y2 = _points[j].get_y();
			midDis[i] += sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));*/
			midDis[i] += sqrt(pow((_points[j].get_x() - _points[i].get_x()), 2) + pow((_points[j].get_y() - _points[i].get_y()), 2));
		} //Нахождение длин векторов до всех точек
	} 
	minNum = midDis[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (minNum > midDis[i])
		{
			minNum = midDis[i];
			minIndex = i;
		}
	}

	std::cout << std::endl;
	_points[minIndex].show();
}



int main()
{
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	points pnts;

	for (size_t i = 0; i < SIZE; i++)
	{
		point pnt(rand() % SIZE, rand() % SIZE);
		pnts.set_point(pnt);
	}
	pnts.show(); //Выводит весь массив точек
	pnts.find(); //Функция Find() находит точку которая имеет минимальную сумму расстояний до всех остальных точек
    return 0;
}
