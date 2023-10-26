#include <iostream>
using namespace std;
int main()
{
    int seven=0,sodd=0;
    int arr[10];
    cout<<"enter the elements of a array : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        arr[i]%2==0?seven += arr[i]:sodd+=arr[i];
    }
    cout <<"sum of even in this array :"<<seven<<endl<<"sum of odd : "<<sodd;
}