#include "robot.hpp"

int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("Ringo", 35);
    robot1.print_info();
    robot2.print_info();
    cout << "---------------" << endl;
    RoboticArm arm1("ram1", 34, 30948.33);
    arm1.print_info();
    arm1.pick_object(34, 3434);
    return 0;
}