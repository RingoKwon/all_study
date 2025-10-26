#include "robot.hpp"

int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("Ringo", 35);
    robot1.print_info();
    robot2.print_info();
    return 0;
}