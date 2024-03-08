// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153
// 370
// 371
// 407
#include <iostream>
using namespace std;
int main()
{
    int last_digit, arm,temp;
    
    for (int i = 1; i <= 500; i++)
    {
        arm=0;
        temp = i;
        while (temp > 0)
        {
            last_digit = temp % 10;
            arm = last_digit * last_digit * last_digit + arm;
            temp /= 10;
        }
        if (arm == i)
        {
            cout << "Number is armstrong :" << i<< endl;
        }
        
    }
 

}