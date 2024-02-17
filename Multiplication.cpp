#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter a 3 digit number: ";
    cin>>a;
    if(a>99&&a<1000){
        b=a/10;
        c=a%10;
        d=a%100;
        e=a/100;
        if((b*c)>(d*e)){
            cout<<"The maximum number is: "<<b*c;
        }else{
            cout<<"The maximum number is: "<<d*e;
        }
    }
    return 0;
}