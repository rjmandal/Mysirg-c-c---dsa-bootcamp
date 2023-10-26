// 7. Write a function in C to count a total number of duplicate elements in an array.

#include <iostream>
using namespace std;
int duplicate(int *, int);
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
    cout << endl<<duplicate(arr, size);
}
int duplicate(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]==arr[j]) count++;
        }
    }
    return count;
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