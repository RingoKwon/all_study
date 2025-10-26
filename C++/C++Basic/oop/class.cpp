#include <iostream>
#include <string>

using namespace std;

class Robot
{
public:
    Robot(string name, int version_number) // <- this is constructor!!!! 
        :name(name), version_number(version_number), internal_temperature(30.0)
    {
        // this->name = name;
        // this->version_number = version_number;
        // this->internal_temperature = 30.0;
    }

    void    say_hi()
    {
        cout    << "Hello my name is "
                << name
                << ", ready to help!"
                << endl;
    }

    void    init_hardware()
    {
        cout << "Init hardware." << endl;
    }

    void    print_info()
    {
        say_hi();
        cout << "Version number: " << version_number << endl;
        cout << "Temperature : " << internal_temperature << endl;
    }
private:
    string name;
    int version_number;
    double  internal_temperature;
};

int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("Ringo", 35);
    robot1.print_info();
    robot2.print_info();
    return 0;
}