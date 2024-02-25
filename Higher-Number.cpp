#include <iostream>
using namespace std;
int main()
{
    int i1,i2;
    cout<<"Enter a number: ";
    cin>>i1;
    cout<<"Enter a second number: ";
    cin>>i2;
    if(i1>i2){
        cout<<i1;
    }else if(i2>i1){
        cout<<i2; 
    }
    else{
        cout<<"The numbers are same";
    }
    return 0;
}
