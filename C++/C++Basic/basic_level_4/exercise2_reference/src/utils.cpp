#include "../include/utils.hpp"

void    arr_cpy(const vector<int> &src, vector<int> &dest)
{
    for (int ele: src)
    {
        dest.push_back(ele);
    }
}

void    prt_arr(vector<int> &arr)
{
    for (int    ele: arr)
    {
        cout << ele << endl;
    }
}