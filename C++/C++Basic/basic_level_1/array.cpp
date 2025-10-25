#include    <iostream>

int main()
{

    double temperature_list[4] = { 1.2, 22.3, 44.3, 44.3};

    std::cout << temperature_list[2] << std::endl;
    temperature_list[2] = 99.99;
    std::cout << temperature_list[2] << std::endl;
    
    std::cout << "----------------------" << std::endl;
    
    std::vector<double> temperature_list2 = { 1.2, 22.3, 44.3, 44.3};
    std::cout << temperature_list2.at(2) << std::endl;
    temperature_list2.at(2) = 88.88;
    std::cout << temperature_list2.at(2) << std::endl;
    std::cout << temperature_list2.size() << std::endl;
    temperature_list2.push_back(999.99);
    std::cout << temperature_list2.size() << std::endl;



    return 0;
}