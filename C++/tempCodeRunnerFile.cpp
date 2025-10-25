#include <iostream>

namespace abc 
{
    int triple(int num)
    {
        return num * 3;
    }

}

using namespace std;


int main()
{
    int a = 1;
    int b;

    b = abc::triple(a);

    cout << "using name space" << endl;
    cout << "triple of " << a << " -> " << b << endl;
    return 0;
}

