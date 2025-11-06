#include <stdio.h>

void    func2()
{
    int* px = new int;
    *px = 7;
    delete px;
}

void    func1()
{
    func2();
}

int main()
{
    func1();

    return (0);
}
