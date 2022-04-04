#include <iostream>

struct date
{
	int day;
	int month;
	int year;
};

int gap(date one, date two)
{
	if (one.year == two.year) 
	{
		if (one.month == two.month)
		{
			return (two.day - one.day);
		}
		else
		{
			return (two.day - one.day + 30);
		}
	}
	else
	{
		if (one.month == two.month)
		{
			return (two.day - one.day + 365);
		}
		else
		{
			return (two.day - one.day + 30 + 365);
		}
	}
}

date pastDateOne(date one, int days)
{
	struct date three = {0, 0, 0};
	if (days < one.day)
	{
		three.day = one.day - days;
		three.month = one.month;
		three.year = one.year;
	}
	else
	{
		int extra = days - one.day;
		three.day = 30 - extra;
		three.month = one.month - 1;
		three.year = one.year;
	}

	return three;
}



int main()
{
	struct date one = { 14, 5, 2004 };
	struct date two = { 24, 4, 2004 };
	std::cout << "Days between: " << gap(one, two) << std::endl;
	struct date three = pastDateOne(one, 15);
	std::cout << "Date of the past: " << three.day<<"."<<three.month<<"."<<three.year << std::endl;
	





}
