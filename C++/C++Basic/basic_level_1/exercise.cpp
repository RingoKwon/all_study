#include <iostream>
#include <numeric>

void    user()
{
    std::string user_name;
    int user_age;

    std::cout << "Enter user name:";
    std::cin >> user_name;
    std::cout << "Enter user age: ";
    std::cin >> user_age;

    std::cout << "user name is " << user_name << std::endl;
    std::cout << "user age is " << user_age << std::endl;
}

void    add()
{
    int a, b;

    std::cout << "Enter num1: ";
    std::cin >> a;
    std::cout << "Enter num2: ";
    std::cin >> b;

    std::cout << "num1 + num2 = " << a + b << std::endl;
}
void    avg()
{
    std::vector<double> arr;

    std::cout << "Enter 1st element ";
    std::cin >> arr.at(0);
    std::cout << "Enter 2nd element ";
    std::cin >> arr.at(1);
    std::cout << "Enter 3rd element ";
    std::cin >> arr.at(2);
    std::cout << "Enter 4th element ";
    std::cin >> arr.at(3);
    std::cout << arr.at(3) <<std::endl;
}

int main()
{
    user();
    std::cout << "--------------" << std::endl;
    add();
    std::cout << "--------------" << std::endl;
    avg();
    return 0;
}