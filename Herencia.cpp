#include <iostream>

using namespace std;

class A
{
private:
    int z;

public:
    int x;
};

class B : public A
{

public:
    int y;
};

int main()
{

    A a;
    B b;
    a.x = 5;
    b.y = 10;
    b.x = 7;

    return 0;
}