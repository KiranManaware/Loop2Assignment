// Print the factorials of first ‘n’ numbers
// Sample Input : 4
// Output :
// 1
// 2
// 6
// 24
#include <iostream>
using namespace std;
int main(){
    int n,fact;
    cout<<"Enter number :";
    cin>>n;
    fact=1;
    for(int i =1;i<=n;i++){
        fact*=i;
        cout<<"factorial of "<<i<<" is : "<<fact<<endl;
    }
}