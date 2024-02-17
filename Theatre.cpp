#include <iostream>
using namespace std;
int main(){
    float a,m,n;
    int b,c;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number m: ";
    cin>>m;
    cout<<"Enter number n: ";
    cin>>n;
    if(0<n&&a<10^9+1){
        b=(m/a)+0.9;
        c=(n/a)+0.9;
    }
    cout<<"The answer is "<<b+c;
    return 0;
}