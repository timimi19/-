#include <iostream>
using namespace std;

class CDAccountV3

{

public:

    CDAccountV3(double d, double r, int m);

    double getBalance() const;

    void output() const;

    static int getNumAccounts();

private:

    double balance;

    double deposit;

    double interestRate;

    int month;

    static int numAccounts;

    void calBalance();

};

CDAccountV3::CDAccountV3(double d, double r, int m)
{
    deposit = d;
    interestRate = r;
    month = m;
    calBalance();
    numAccounts++;
}

bool compareAccounts(CDAccountV3& account1, CDAccountV3& account2);

int CDAccountV3::numAccounts(0);



//테스트 코드와 멤버함수 정의는 다음과 같습니다.



int main()

{

    CDAccountV3 account1(10000, 10, 6);

    account1.output();



    CDAccountV3 account2(10000, 5, 12);

    account2.output();



    cout << "The number of accounts: "

        << CDAccountV3::getNumAccounts() << endl;



    if (compareAccounts(account1, account2))

        cout << "same!" << endl;

    else

        cout << "not same!" << endl;



    return 0;

}



double CDAccountV3::getBalance() const

{

    return balance;

}

void CDAccountV3::calBalance() const

{

    balance = deposit * (1 + interestRate / 100 * month / 12);

}

void CDAccountV3::output()

{

    cout << "Deposit: " << deposit << endl

        << "Interest Rate: " << interestRate << "%" << endl

        << "Period: " << month << " months" << endl

        << "------------------------------" << endl

        << "Balance: " << balance << endl

        << "------------------------------" << endl;

}



int CDAccountV3::getNumAccounts()

{

    return numAccounts;

}



bool compareAccounts(CDAccountV3& account1, CDAccountV3& account2)

{

    return account1.getBalance() == account2.getBalance();

}

