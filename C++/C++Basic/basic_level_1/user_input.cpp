#include <iostream>

int main()
{
    std::string user_name;
    std::cout << "Enter Useer Name: ";
    std::cin >> user_name;
    std::cout << "Output: " + user_name << std::endl;

    return 0;
}