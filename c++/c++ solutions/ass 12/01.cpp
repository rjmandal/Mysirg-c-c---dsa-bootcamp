#include <iostream>
using namespace std;
void naturalNo(int);
int main()
{
    int n;
    cout << "enter the no : ";
    cin >> n;
    naturalNo(n);
    return 0;
}
void naturalNo(int n)
{
    if (n > 0)
    {
        naturalNo(n - 1);
        cout << n;
    }
}


// #include <iostream>
// using namespace std;

// void naturalNo(int);

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     naturalNo(n);
//     return 0;
// }

// void naturalNo(int n) {
//     if (n > 0) {
//         naturalNo(n - 1); // Recursive call
//         cout << n << " "; // Print n with a space
//     }
// }

