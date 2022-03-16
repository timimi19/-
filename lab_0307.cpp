// lab_0307.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int maxInt(int a, int b=2);//함수선언을 먼저하고 내용은 뒤로 분리한것
int maxIntRef(int& a, int& b);

struct CDAccountV1
{
    double deposit=10000;
    double interestRate=10;
    int month=12;
};

CDAccountV1 doubleInterest(CDAccountV1 oldAccount);

int main()
{
    CDAccountV1 account{};

    double balance(0), interest(0);
    interest = account.deposit * account.interestRate / 100 * account.month / 12.0;
    balance = account.deposit + interest;

    cout << account.deposit << endl
        << account.month << endl
        << account.interestRate << endl
        << balance << endl;



    CDAccountV1 account2{};
    account2 = doubleInterest(account);
    cout << account2.interestRate << endl;

    //cout << "Hello World!\n";
    //bool b1(true);
    //const char newline('\n');
    //int num_students(30);
    //double avg(0.0);

    //cout << sizeof b1 << endl; //데이터 크기알기 위해서_연산자임
    //cout << sizeof(newline) << endl;
    //cout << sizeof(num_students) << endl;
    //cout << sizeof(avg) << endl;//주석표시는 ctrl+kc

    int a(1), b(2), c{ 0 };

    cout << "in main() " << &a << " " << &b << endl;//in main()의 의미?    c = maxInt(a, b);
    c = maxInt(a);
    c = maxIntRef(a,b);//주소 전달

    //if (a == 0)//a가 0과 같냐의 의미, a=0일 때는 else으로 나옴
    //    cout << "if" << endl;
    //else
    //    cout << "else" << endl;

    //int n(2);
    //cout << 2 * ++n << endl;
    ////증가연산자가 가장 순위가 높음 따라서 괄호안써도 먼저됨
    //cout << n << endl;

    //int i = 0;
    //for (;i < 10;++i)//초기조건은 빼서 앞에 넣어도 됨
    //    cout << i + 1 << " ";

  
    //while (i < 10)
    //{
    //    cout << i + 1 << " ";
    //    ++i;
    //}

    //return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

int maxInt(int a, int b)
{
    cout << "in main() " << &a << " " << &b << endl;
    int c(0);
    if (a > b)
        c = a;
    else
        c = b;
    return c;
}

int maxIntRef(int& a, int& b)
{
    cout << "in main() " << &a << " " << &b << endl;
    int c(0);
    if (a > b)
        c = a;
    else
        c = b;
    return c;
}

CDAccountV1 doubleInterest(CDAccountV1 oldAccount)
{
    CDAccountV1 temp;
    temp = oldAccount;
    temp.interestRate = 2 * oldAccount.interestRate;
    return temp;
}
