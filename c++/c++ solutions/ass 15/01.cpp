#include <iostream>
using namespace std;
int largestNumber(int *, int n);
void display(int *, int n);
void input(int *, int n);
int main()
{
    int n;
    cout << "enter the size of the array : ";
    cin >> n;
    int arr[n];
    input(arr, n);
    display(arr, n);
    cout <<endl<< largestNumber(arr, n);
}
int largestNumber(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}