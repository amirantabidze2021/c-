#include <iostream>
using namespace std;
int main()
{ 
    int i1;
    cout<<"Write a number: ";
    cin>>i1;
    if(i1<0){
        cout<<"The number is negative";
    }else if(i1>0){
        cout<<"The number is positive";
    }else{
        cout<<"The number is 0";
    }
    return 0;
}
