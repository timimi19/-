#include<iostream>
using namespace std;

class IntCoor

{

    int x, y;

public:

    IntCoor(int cx = 0, int cy = 0) :x(cx), y(cy) {}

    const IntCoor operator++();//전위연산자

    const IntCoor operator++(int);//후위연산자

    friend const IntCoor operator+(const IntCoor& a, const IntCoor& b);

    friend const IntCoor operator-(const IntCoor& a, const IntCoor& b);

    friend bool operator==(const IntCoor& a, const IntCoor& b);

    friend const IntCoor operator-(const IntCoor& a);

    friend ostream& operator<<(ostream& out, const IntCoor& a);

    friend istream& operator>>(istream& in, IntCoor& a);

};


int main()

{

    IntCoor a;

    cout << "Enter two integers for coordinates: ";

    cin >> a;



    IntCoor b = a++;

    cout << "a: " << a << endl;

    cout << "b: " << b << endl;

    cout << "a+b: " << a + b << endl << endl;



    a = -a;

    IntCoor c = ++a;

    cout << "a: " << a << endl;

    cout << "c: " << c << endl;

    if (a == c) cout << "same" << endl;

    else cout << "not same" << endl;

    cout << "a-c: " << a - c << endl << endl;



    return 0;

}



const IntCoor IntCoor::operator++()

{

    return IntCoor(++x, ++y);

}



const IntCoor IntCoor::operator++(int)

{
    //후위증가연산자 구현
    int temp1 = x;
    int temp2 = y;
    x++;
    y++;
    return IntCoor(temp1,temp2);

}



const IntCoor operator+(const IntCoor& a, const IntCoor& b)

{

    return IntCoor(a.x + b.x, a.y + b.y);

}



const IntCoor operator-(const IntCoor& a, const IntCoor& b)

{
    //프렌드함수로서 이항연산자 - 구현

    return IntCoor(a.x-b.x,a.y-b.y);

}



bool operator==(const IntCoor& a, const IntCoor& b)

{

    return a.x == b.x && a.y == b.y;

}



const IntCoor operator-(const IntCoor& a)

{

    //프렌드함수로서 단항연산자 - 구현

    return IntCoor(-a.x,-a.y);

}



ostream& operator<<(ostream& out, const IntCoor& a)

{

    out << "(" << a.x << "," << a.y << ")";

    return out;

}



istream& operator>>(istream& in, IntCoor& a)

{
    //입력연산자 >> 구현 : x와 y를 차례로 입력

    //TODO: 여기에 return 문을 삽입합니다.
    in >> a.x;
    in >> a.y;
    return in;

}


