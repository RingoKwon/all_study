#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> temperatureList = {23.2, 44.5, 34.2};

    for (size_t i = 0; i < temperatureList.size(); i++)
    {
        if (temperatureList.at(i) > 30)
        {
            cout << "Temperature is " << temperatureList.at(i) << " - Very HOT!" << endl;
        }
        else
            cout << "Temperature is " << temperatureList.at(i)  << endl;
    }
    cout << "-----------------\nEnd Program" << endl;
    
    cout << "-----------------\nC++ way" << endl;
    for (double temp: temperatureList)
    {
        cout << "Temperature is " << temp << endl;
    }
    return 0;
}