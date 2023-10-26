#include <iostream>
using namespace std;
void rotate(int *, int, int, int);
void display(int *, int);
void input(int *, int);
int main()
{
    int size, d, n;
    cout << "enter the size of the array : ";
    cin >> size;
    cout << "enter direction for right 1 and for left 0 : ";
    cin >> d;
    cout << "enter the no of rotaion you want : ";
    cin >> n;
    int arr[size];
    input(arr, size);
    display(arr, size);
    cout << endl;
    rotate(arr, size, d, n);
    display(arr, size);
}
void rotate(int arr[], int size, int d, int n)
{
    int arr2[size];
    if (d == 0)
    {
        int j = 0;
        for (int i = d + 1; i < n; i++)
        {
            arr2[j] = arr[i];
            arr2[i] = arr[j];
            j++;
        }
        cout<<endl;
        display(arr2, size);
        cout<<endl;
    }
    else if (d == 1)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = arr[size - 1];
            for (int j = size - 1; j > 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[0] = temp;
        }
    }
}
// void rotate(int arr[], int size, int d, int n)
// {
//     if (d == 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int temp = arr[0];
//             for (int j = 1; j < size; j++)
//             {
//                 arr[j - 1] = arr[j];
//             }
//             arr[size - 1] = temp;
//         }
//     }
//     else if(d==1)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int temp = arr[size-1];
//             for (int j = size-1; j >0; j--)
//             {
//                 arr[j] = arr[j-1];
//             }
//             arr[0] = temp;
//         }
//     }
// }

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void input(int arr[], int n)
{
    cout << "enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}