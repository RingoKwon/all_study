#include <iostream>

int main()
{
    const   int seconds_per_hour = 3600;
    const   double max_allowed_temperature = 76.8;
    // seconds_per_hour = 3; error! 

    int num = 1;
    double temperature = 26.4;
    bool is_true = false;
    std::string str = "ringo";

    std::cout << num << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_true << std::endl;
    std::cout << str << std::endl;
    return 0;
}