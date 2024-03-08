// WAP to print the sum of all the even digits of a
//  given number.
// Sample Input : 4556
// Output: 10
#include <iostream>
using namespace std;
int main(){
    int n,sum,last_digit;
    cout<<"Enter number : ";
    cin>>n;
    sum=0;
    while(n>0){
        last_digit=n%10;
        n/=10;
        if(last_digit%2==0){
            sum+=last_digit;
        }
    }
    cout<<"Sum of digit : "<<sum;
}