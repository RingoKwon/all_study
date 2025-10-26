#include "../include/utils.hpp"

int main()
{
    vector<int> arr = { 1, 2, 3};
    vector<int> arr2;

    arr_cpy(arr, arr2);
    prt_arr(arr2);

    return 0;
}