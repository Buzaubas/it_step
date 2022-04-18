#include <iostream>
#include <string.h>
#include "book.h"

using namespace std;

book::book() : author(nullptr), name(nullptr)
{
	/*author = nullptr;*/
	/*name = nullptr;*/
	publishing_house = nullptr;
	year = 0;
	number_pages = 0;
}

book::~book()
{
	if (author) //если занимают память удалить
		delete[] author;
	if (name)
		delete[]  name;
	if (publishing_house)
		delete[] publishing_house;
}

book::book(const book& tmp) //конструктор копирования, реализовывать только когда есть указатели, в остальных случаях нет смысла
{
	size_t size = strlen(tmp.author);
	this->author = new char[size + 1]; //указатель на текущий объект
	strcpy_s(this->author, size + 1, tmp.author);

	size = strlen(tmp.name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, tmp.name);

	size = strlen(tmp.publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, tmp.publishing_house);

	this->year = tmp.year;
	this->number_pages = tmp.number_pages;
}

book::book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);

	size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);

	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);

	this->year = year;
	this->number_pages = number_pages;
}

book::book(unsigned short number_pages) : book() // делегирование другому конструтору, так как может работать только один 
{
	this->number_pages = number_pages;
}

void book::init(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);

	size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);

	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);

	this->year = year;
	this->number_pages = number_pages;

}

void book::show() const
{
	std::cout << "Author: " << author << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Publisher: " << publishing_house << std::endl;
	std::cout << "Year: " << year << std::endl;
	std::cout << "Pages: " << number_pages << std::endl;
}

void book::show_by_author(const char* author)
{
	size_t size = strlen(author);
	char* short_name = new char[size+1];
	short_name = this->author;
	if (short_name == author)
	{
		std::cout << name << std::endl;
	}
}

void book::set_author(const char* author)
{
	/*this->author = (char*)author;*/
	if (!this->author)
		delete[] this->author;
	size_t size = strlen(author);
	char* short_name = new char[size + 1];
	strcpy_s(short_name, size + 1, author);
}
