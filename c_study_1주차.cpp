// 태어난 날로부터 몇일, 몇 개월, 몇년 지났는지 코딩 해보기 
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
	cout << "나는 태어난 지 " << GapYear << "년 " << GapMonth << "개월 " << GapDay << "일 되었다" << endl;
	
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
