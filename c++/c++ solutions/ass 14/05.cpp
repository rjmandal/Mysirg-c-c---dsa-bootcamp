#include <iostream>
using namespace std;
int main()
{
    int arr[10], min = INT_MAX;
    cout << "enter the elements of a array : \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "max value in this array is : " << min;
}