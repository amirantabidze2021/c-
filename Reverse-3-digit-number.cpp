#include <iostream>
using namespace std;
int main()
{
    int n,n2,n3,n4;
    cout<<"Enter a number: ";
    cin>>n;
    if(99<n&&n<1000&&n%100!=0 ){
        n2=n%10;
        n3=(n%100-n2)/10;
        n=n/100;
        n4=n2*100+n3*10+n;
    }
    cout<<"The reversed number is: "<<n4;
    return 0;
}
