#include <iostream>
#include <vector>

using namespace std;

int max(vector<int> arr)
{
    int max;

    max = arr.at(0);
    for (int    ele: arr)
    {
        if (max < ele)
            max = ele;
    }
    return max;
}
int maxDynamic(vector<int> arr)
{
    int maxNum;
    int i = 0;

    while (i < arr.size())
    {
        
        cout << "Enter " << i + 1 << "th Element: ";
        cin >> arr[i];
        i++;
    }
    maxNum = max(arr);
    cout << "Max number is " << maxNum << endl;
    return maxNum;
}

int main()
{
    vector<int> arr = {1,2,3,4,4,4,5};
    vector<int> arrEmpty(5);
    int maxNum;

    maxNum = max(arr);
    cout << "max is " << maxNum << endl;
    maxDynamic(arrEmpty);
    return 0;
}