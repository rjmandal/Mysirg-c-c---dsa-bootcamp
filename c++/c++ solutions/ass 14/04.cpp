#include <iostream>
using namespace std;
int main()
{
    int arr[10], max = INT_MIN;
    cout << "enter the elements of a array : \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"max value in this array is : "<<max;
}