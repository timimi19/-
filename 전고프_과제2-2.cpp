#include <iostream>

using namespace std;



class CDAccountV2

{
    double deposit = 10000;

    double interestRate = 10;

    int month = 6;

public:

    void output();

    double getDeposit();
    double getInterestRate();
    int getMonth();
    void setMonth(int newmonth);//(°ýÈ£¾È¿¡ newmonth
    void setInterestRate(double interestRate);
    void setDeposit(double deposit);


};



int main()

{

    CDAccountV2 account1;
    account1.output();

    CDAccountV2 account2;

    account2.setDeposit(20000);

    account2.setInterestRate(5);

    account2.setMonth(6);

    account2.output();



    if (account1.getDeposit() == account2.getDeposit()

        &&

        account1.getInterestRate() == account2.getInterestRate()

        &&

        account1.getMonth() == account2.getMonth())

        cout << "same" << endl;

    else

        cout << "not same" << endl;

    return 0;

}



void CDAccountV2::output()

{

    cout << "Deposit: " << deposit << endl

        << "Interest Rate: " << interestRate << "%" << endl

        << "Period: " << month << " months" << endl;

}

double CDAccountV2::getDeposit()
{
    return deposit;
}

double CDAccountV2::getInterestRate()
{
    return interestRate;
}

int CDAccountV2::getMonth()
{
    return month;
}

void CDAccountV2::setMonth(int newmonth)
{
    month = newmonth;
}

void CDAccountV2::setInterestRate(double newinterestRate)
{
    interestRate = newinterestRate;
}

void CDAccountV2::setDeposit(double newdeposit)
{
    deposit = newdeposit;
}