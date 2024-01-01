#include <iostream>
#include <vector>
using namespace std;
bool search(int arr[], int index, int target, int size)
{
    if (index == size)
    {
        return false;
    }

    return arr[index] == target || search(arr, index + 1, target, size);
}

int first_search1(int arr[], int index, int target)
{
    if (index == *(&arr + 1) - arr)
    {
        return -1;
    }

    if (arr[index] == target)
    {
        return index;
    }
    return first_search1(arr, index + 1, target);
}


int main()
{
    int n;
    // int size=11;
    vector<int> vect;
    int arr[11] = {2, 4, 12, 34, 67, 22, 45, 66, 33, 46, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the number which you want to search: " << endl;
    cin >> n;

    // cout << search(arr, 0, n, size) << endl;
    // cout << first_search1(arr, 0, n) << endl;
    
    
 

    return 0;
}