#include <iostream>
#include "book.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	/*book second("Адитья Бхаргава", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "Питер", 2017, 370);
	book first = second;*/

	const int size = 3;
	book mas[size];
	mas[0].init("Адитья Бхаргава", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "Питер", 2017, 370);
	mas[1].init("Игорь Савчук", "Отъявленный программист: Лайфхакинг из первых рук", "Питер", 2015, 272);
	mas[2].init("Бен Клеменс", "21st Century C", "ДМК Пресс", 2015, 376);

	std::cout << "Список книг Бен'a:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_author("Бен");
	}

	/*std::cout << "Список книг издательства Питер:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_publishing_house("Питер");
	}

	std::cout << "Список книг после 2000:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_year(2000);
	}

	return 0;*/
}
