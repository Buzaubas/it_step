#pragma once

class book
{
	char* author; // по умолчанию приватные
	char* name;
	char* publishing_house;
	unsigned short year;
	unsigned short number_pages;
public:
	book();
	~book();

	book(const book& tmp);
	book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages);
	explicit book(unsigned short number_pages);
	void init(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages);
	void show() const;
	void show_by_author(const char* author);
	void show_by_publishing_house(const char* publishing_house);
	void show_by_year(unsigned short year);
	void set_author(const char* author);
	void set_name(const char* name);
	void set_publishing_house(const char* publishing_house);
	void set_year(unsigned short year);
	void set_number_pages(unsigned short number_pages);
	const char* get_author()const;
	const char* get_name()const;
	const char* get_publishing_house()const;
	unsigned short get_year()const;
	unsigned short get_number_pages()const;
};
