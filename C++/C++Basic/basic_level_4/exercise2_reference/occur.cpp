#include <iostream>
#include <vector>

using namespace std;

int cnt_occur(const vector<string> &arr, string str)
{
    int occur = 0;
    for (string ele: arr)
    {
        if (ele == str)
            occur++;
    }
    return occur;
}

int main()
{
    int occur; 
    vector<string> arr = {"ringo", "ringo", "bingo"};
    occur = cnt_occur(arr, "ringo");
    cout << occur << endl;
    return 0;
}