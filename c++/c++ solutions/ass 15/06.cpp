// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.

#include <iostream>
using namespace std;
void rotate(int *, int);
void display(int *, int);
void input(int *, int);
int main()
{
    int size;
    cout << "enter the size of the array : ";
    cin >> size;
    int arr[size];
    input(arr, size);
    display(arr, size);
    cout << endl;
    rotate(arr, size);
}
void rotate(int arr[], int size)
{
    for (int i = size-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
void input(int arr[], int size)
{
    cout << "enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}