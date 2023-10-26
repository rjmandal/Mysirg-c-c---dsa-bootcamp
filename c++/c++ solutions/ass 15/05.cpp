// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

#include <iostream>
using namespace std;
int adjacentDuplicate(int *, int);
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
    cout << endl
         << adjacentDuplicate(arr, size);
}
int adjacentDuplicate(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
            return arr[i];
    }
    return -1;
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