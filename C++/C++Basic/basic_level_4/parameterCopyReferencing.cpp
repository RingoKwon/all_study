#include <iostream>
#include <vector>

using namespace std;

void    add_zeros(vector<int> arr, int  zeros_num)
{
    size_t  i;

    i = 0;
    while (i < zeros_num)
    {
        arr.push_back(0);
        i++;
    }
    cout <<"Arr2: " << arr.size() << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    cout <<"Arr1: " << arr.size() << endl;
    add_zeros(arr, 3);
    cout <<"Arr3: " << arr.size() << endl;
    return 0;
}