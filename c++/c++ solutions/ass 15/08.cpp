// 8. Write a function in C to print all unique elements in an array.

#include <iostream>
using namespace std;
void unique(int *, int);
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
    unique(arr, size);
}
void unique(int arr[], int size)
{
    int arr2[size],k=0;
    for (int i = 0; i < size - 1; i++)
    {
        int count = 0;
        for (int j = 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 0)
        {
            arr2[k] = arr[i];
            k++;
        }
    }
    display(arr2,size);
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