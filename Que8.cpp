// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :
// 1 1 2 3 5 8 13 21 34 55
#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cout << "Enter n : ";
    cin >> n;
    a = 1;
    b = 1;
    for (int i = 1; i <= n - 2; i++)
    {

        if (a == 1 && b == 1)
        cout << a << " " << b << " ";
        c = a + b;
        a = b;
        b = c;
        cout << b << " ";
    }
}