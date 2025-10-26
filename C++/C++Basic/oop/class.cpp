#include <iostream>
#include <string>

using namespace std;

class Robot
{
public:
    Robot(string name, int version_number)
        :name(name), version_number(version_number), internal_temperature(30.0)
    {
        // this->name = name;
        // this->version_number = version_number;
        // this->internal_temperature = 30.0;
    }
private:
    string name;
    int version_number;
    double  internal_temperature;
};

int main()
{
    return 0;
}