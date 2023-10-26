#include <iostream>
using namespace std;
int main()
{
    int arr[10], min = INT_MAX,secmin=INT_MAX;
    cout << "enter the elements of a array : \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if(min>arr[i]){
            secmin=min;
            min=arr[i];
        }
        else if(arr[i]>min &&arr[i]<secmin){
            secmin=arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<<"min = "<<min<<endl<<"second min is "<<secmin;
    
}