#include <iostream>

using namespace std;

class X
{

    public:
    char c;

};

class A
{
private:
    int z;

public:
    int x;

    void sumarX(int s)
    {
        this->x += s;
    }
};

class B : public A
{

public:
    int y;
};

class C : public B, public X
{
public:
    int w;
};

int main()
{

    A a;
    B b;
    a.x = 5;
    b.y = 10;
    b.x = 7;

    cout << b.x << endl;
    b.sumarX(15);
    cout << a.x << endl;

    C c;
    

    return 0;
}