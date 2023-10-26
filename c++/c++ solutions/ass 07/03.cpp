// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

#include <iostream>
using namespace std;
int main()
{
    int a = -1, b = 1, c, n, i;
    cout << "enter the no :";
    cin >> n;
    while (c<=n)
    {
        c = a + b;
        if (c == n)
        {
            break;
        }
        a = b;
        b = c;
    }
    if (c!=n)
    {
        cout<<n<<" is not present in fibonacci series";
    }
    else
    {
        cout << n << " is present in fibonacci series";
    }
}
