// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <iostream>
void pascalTriangle(int);
int binomialcoff(int n, int r);
int factorial(int n);
using namespace std;


int main()
{
    int no;
    cout << "enter the no : ";
    cin >> no;
    pascalTriangle(no);
    return 0;
}
void pascalTriangle(int no)
{
    for (int line = 0; line < no; line++)
    {
        for(int j=0;j<=no-line;j++){
            cout << " ";
        }
        for (int i = 0; i <= line; i++)
        {
            cout << " " << binomialcoff(line, i);
        }
        cout << endl;
    }
}
int binomialcoff(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int factorial(int n)
{
    int fact = 1;
    for (; n; n--)
    {
        fact *= n;
    }
    return fact;
}




// int main()
// {
//     int no;
//     cout << "enter the no : ";
//     cin >> no;
//     pascalTriangle(no);
//     return 0;
// }
// void pascalTriangle(int no)
// {
//     for (int line = 0; line < no; line++)
//     {
//         for (int i = 0; i <= line; i++)
//         {
//             cout << " " << binomialcoff(line, i);
//         }
//         cout << endl;
//     }
// }
// int binomialcoff(int n, int r)
// {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
// int factorial(int n)
// {
//     int fact = 1;
//     for (; n; n--)
//     {
//         fact *= n;
//     }
//     return fact;
// }