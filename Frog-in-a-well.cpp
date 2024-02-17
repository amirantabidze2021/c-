#include <bits/stdc++.h>
using namespace std;
int main(){
    int c;
    float N,a,b;
    cout<<"Write a number: ";
    cin>>N;
    cout<<"Write a 2nd number: ";
    cin>>a;
    cout<<"Write a 3rd number: ";
    cin>>b;
    if(a>b){
       c=N/(a-b)-0.1;
    }
    cout<<"The final number is "<<c;
    return 0;
}