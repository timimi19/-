// �¾ ���κ��� ����, �� ����, ��� �������� �ڵ� �غ��� 
#include <iostream>
using namespace std;

class DayOfYear
{
	int Year;
	int Month;
	int Day;
public:
	void input();
	void setYear(int newyear);
	void setMonth(int newmonth);
	void setDay(int newday);
	int getYear();
	int getMonth();
	int getDay();

};

int main()
{
	DayOfYear today{};
	cout << "enter today's date: " << endl;
	today.input();

	DayOfYear Birthday{};
	cout << "enter birthday's date: " << endl;
	Birthday.input();

	int GapYear;
	GapYear = (today.getYear() - Birthday.getYear());
	int GapMonth;
	GapMonth = (today.getMonth() - Birthday.getMonth());
	int GapDay;
	GapDay = (today.getDay() - Birthday.getDay());
	cout << "���� �¾ �� " << GapYear << "�� " << GapMonth << "���� " << GapDay << "�� �Ǿ���" << endl;
	
	return 0;

}

void DayOfYear::input()
{
	cout << "enter the year: ";
	cin >> Year;
	cout << "enter the month: ";
	cin >> Month;
	cout << "enter the day: ";
	cin >> Day;
}


void DayOfYear::setYear(int newyear)
{
	Year = newyear;
}

void DayOfYear::setMonth(int newmonth)
{
	Month = newmonth;
}

void DayOfYear::setDay(int newday)
{
	Day = newday;
}

int DayOfYear::getYear()
{
	return Year;
}

int DayOfYear::getMonth()
{
	return Month;
}

int DayOfYear::getDay()
{
	return Day;
}
