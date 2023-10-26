#include <iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout << "enter the elements of a array : \n";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 9; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
