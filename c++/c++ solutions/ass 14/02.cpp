#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum/10.0;
}