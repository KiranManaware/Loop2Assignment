// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]
#include <iostream>
using namespace std;
int main(){
    int n,sum,last_digit,reverse,a;
    cout<<"Enter number : ";
    cin>>n;
    sum=0;
    reverse=0;
    a=n;
    while(n>0){
        last_digit=n%10;
        n/=10;
        reverse=reverse*10+last_digit;
        sum+=last_digit; 
    }
    cout<<(a+reverse)<<" ["<<a<<" + "<<reverse<<"]";
    
}