//#include<iostream>
//using namespace std;
////�����ڴ� Ŭ�����ȿ��� ����Ǹ� �̸��� Ŭ������ ���ƾ��Ѵ�.
////�����ڴ� ȣ��Ұ�!
////���� �̸� �ι� �ݺ��ǰ� ���������� ���� ���� ������
////������ �����ϴ� ���->DOY::DOY(int monthVlaue,int dayValue):(month(monthValue),day(dayValue))->�ʰ�ȭ ����{}
//class DayOfYear
//{
//	int month;
//	int day;
//	void testDate();
//public:
//	DayOfYear(int monthValue = 1, int dayValue = 1);
//	void output();
//	void input();
//	int getMonth();
//	int getDay();
//};
//
//int main()
//{
//	DayOfYear date1(1, 9), date2(4, 20), date3(7);
//	cout << "Initialized dates: " << endl;
//	date1.output();cout << endl;
//	date2.output();cout << endl;
//	date3.output();cout << endl;
//
//	date1 = DayOfYear(10, 31);
//	cout << "date1 reset to the following: ";
//	date1.output();cout << endl;
//	return 0;
//}
//
//void DayOfYear::testDate()
//{
//	if ((month < 1) || (month > 12))
//	{
//		cout << "illegal month number.";
//		exit(1);
//	}
//	if ((day < 1) || (day > 31))
//	{
//		cout << "illegal day value!";
//		exit(1);
//	}
//}
//
//DayOfYear::DayOfYear(int monthValue, int dayValue)
//{
//	month = monthValue;
//	day = dayValue;
//}
//
//void DayOfYear::output()
//{
//	switch (month)
//	{
//	case 1:
//		cout << "Jan ";break;
//	case 2:
//		cout << "Feb ";break;
//	case 3:
//		cout << "Mar ";break;
//	case 4:
//		cout << "April ";break;
//	case 5:
//		cout << "May ";break;
//	case 6:
//		cout << "June ";break;
//	case 7:
//		cout << "July ";break;
//	case 8:
//		cout << "Aug ";break;
//	case 9:
//		cout << "Sep ";break;
//	case 10:
//		cout << "Oct ";break;
//	case 11:
//		cout << "Nov ";break;
//	case 12:
//		cout << "Dec ";break;
//	default:
//		cout << "error";break;
//	}
//	cout << day;
//}
//
//void DayOfYear::input()
//{
//	cout << "today's month as a number: ";
//	cin >> month;
//	cout << "today's day of the month: ";
//	cin >> day;
//}
//
//int DayOfYear::getMonth()
//{
//	return month;
//}
//
//int DayOfYear::getDay()
//{
//	return day;
//}


//<Ŭ�������� ������� ����>

//#include<iostream>
//using namespace std;
////���ӻ����ڴ� �����ڰ� �ٸ� �����ڸ� ȣ���ϴ� ��
//class DayOfYear
//{
//	int month;
//	int day;
//	void testDate();
//
//public:
//	DayOfYear(int monthValue = 1, int dayValue = 1);
//	void output();
//	void input();
//	int getMonth();
//	int getDay();
//};
//class Holiday
//{
//	DayOfYear date;
//	bool parkingEnforcement;
//public:
//	Holiday(int month, int day, bool theEnforcement);//������
//	void output();
//};
//
//int main()
//{
//	Holiday h(2, 14, true);
//	cout << "Testing the class Holiday.\n";
//	h.output();
//
//	return 0;
//}
//void DayOfYear::testDate()
//{
//	if ((month < 1) || (month > 12))
//	{
//		cout << "illegal month number.";
//		exit(1);
//	}
//	if ((day < 1) || (day > 31))
//	{
//		cout << "illegal day value!";
//		exit(1);
//	}
//}
//
//DayOfYear::DayOfYear(int monthValue, int dayValue)
//{
//	month = monthValue;
//	day = dayValue;
//}
//
//void DayOfYear::output()
//{
//	switch (month)
//	{
//	case 1:
//		cout << "Jan ";break;
//	case 2:
//		cout << "Feb ";break;
//	case 3:
//		cout << "Mar ";break;
//	case 4:
//		cout << "April ";break;
//	case 5:
//		cout << "May ";break;
//	case 6:
//		cout << "June ";break;
//	case 7:
//		cout << "July ";break;
//	case 8:
//		cout << "Aug ";break;
//	case 9:
//		cout << "Sep ";break;
//	case 10:
//		cout << "Oct ";break;
//	case 11:
//		cout << "Nov ";break;
//	case 12:
//		cout << "Dec ";break;
//	default:
//		cout << "error";break;
//	}
//	cout << day;
//}
//
//void DayOfYear::input()
//{
//	cout << "today's month as a number: ";
//	cin >> month;
//	cout << "today's day of the month: ";
//	cin >> day;
//}
//
//int DayOfYear::getMonth()
//{
//	return month;
//}
//
//int DayOfYear::getDay()
//{
//	return day;
//}
//
//Holiday::Holiday(int month, int day, bool theEnforcement):date(month,day),parkingEnforcement(theEnforcement){}
//
//void Holiday::output()
//{
//	date.output();
//	cout << endl;
//	if (parkingEnforcement)
//		cout << "Parking laws will be enforced.\n";
//	else
//		cout << "Parking laws will not be enforced.\n";
//}

//<������� ����>
#include<iostream>
using namespace std;
class Counter
{
	int cnt;
	static int static_cnt;
public:
	Counter():cnt(0){}
	int getCnt() { ++cnt;return cnt; }
	static int getStaticCnt() { ++static_cnt;return static_cnt; }
};
int Counter::static_cnt = 0;//�����Ű����� �ʱ�ȭ

int main()
{
	Counter A, B, C;
	cout << "  " << Counter::getStaticCnt() << endl;
	cout << A.getCnt() << " " << A.getStaticCnt() << endl;
	cout << B.getCnt() << " " << B.getStaticCnt() << endl;
	cout << C.getCnt() << " " << B.getStaticCnt() << endl;
	cout << " " << Counter::getStaticCnt() << endl;

	return 0;
}