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

//char DayOfTheWeek(date one)
//{
//	char name = 'Monday';
//	if (one.day % 7 == 0)
//	{
//		return name;
//	}
//	else
//	{
//		
//	}
//}

struct times
{
	int sec;
	int min;
	int hour;
};

int timeDivide(times one, times two)
{
	if (one.hour == two.hour)
	{
		if (one.min == two.min)
		{
			return (two.sec - one.sec);
		}
	}
}

times pastTime(times one, int sec)
{
	struct times three = { 0, 0, 0 };

	if (one.sec > sec)
	{
		three.sec = one.sec - sec;
		three.min = one.min;
		three.hour = one.hour;
	}
	else
	{
		sec = sec - one.sec;
		three.sec = 60 - sec;
		three.min = one.min - 1;
		three.hour = one.hour;
	}

	return three;
}

struct sentence
{
	char* word;
	int countWord;
};

int numberOfWords(char* s)
{
	size_t i = 0;
	int count{ 0 };
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			count++;
		}
		i++;
	}
	return count + 1;
}

char* addWord(char* s, char* word)
{
	int count1{ 0 };
	while (s[count1] != '\0')
	{
		count1++;
	}

	int count2{ 0 };
	while (word[count2] != '\0')
	{
		count2++;
	}

	int index{ 0 };

	for (int i = count1 + 1; i < count1 + count2; i++)
	{
		s[i] = word[index];
		index++;
	}

	return s;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	struct date one = { 14, 5, 2004 };
	struct date two = { 24, 4, 2004 };
	std::cout << "Days between: " << gap(one, two) << std::endl;
	struct date three = pastDateOne(one, 15);
	std::cout << "Date of the past: " << three.day<<"."<<three.month<<"."<<three.year << std::endl;
	//std::cout << "Day of the week: " << DayOfTheWeek(one) << std::endl;
	

	struct times a = { 50, 58, 20 };
	struct times b = { 55, 58, 20 };
	std::cout << "Sec: " << timeDivide(a, b) << std::endl;
	struct times four = pastTime(a, 15);
	std::cout << "Date of the past: " << four.sec << "." << four.min << "." << four.hour << std::endl;



	const int BUFF_SIZE = 512;
	char* buffer = new char[BUFF_SIZE];
	char* plus = new char[BUFF_SIZE];



	std::cin.getline(buffer, BUFF_SIZE);
	std::cin.getline(plus, BUFF_SIZE);

	addWord(buffer, plus);
	std::cout <<buffer << std::endl;


	




}
