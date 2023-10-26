#include <iostream>
using namespace std;
int main()
{
    int arr1[10], i,arr2[10];
    cout << "enter the elements of a array : \n";
    for (i = 0; i < 10; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    for (i = 0; i < 10; i++)
    {
        arr2[i] =arr1[i];
        cout << arr2[i] << " ";
    }
    // for (i = 0; i < 10; i++)
    // {
    // }
}
