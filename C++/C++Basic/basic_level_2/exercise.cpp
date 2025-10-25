#include <iostream>

using namespace std;

namespace calculation
{

    double  fomula(double in)
    {
        double  out;
        out = in *1.8 + 32;
        return out;
    }
}

int main()
{
    double  res;

    res = calculation::fomula(30);
    cout << res << endl;

    return 0;
}