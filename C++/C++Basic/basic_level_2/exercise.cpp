#include <iostream>

using namespace std;

namespace calculation
{

    double  fomula(double in)
    {
        double  out;
        out = in *1.8 + 32.0;
        return out;
    }
}

int main()
{
    double  res;

    res = calculation::fomula(28);
    cout << res << endl;

    return 0;
}