#include <iostream>
using namespace std;
int main()
{
    int arr[10], max = INT_MIN,secMax=INT_MIN;
    cout << "enter the elements of a array : \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }
        else if(arr[i]<max &&arr[i]>secMax){
            secMax=arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<<"max = "<<max<<endl<<"second max is "<<secMax;
    
}