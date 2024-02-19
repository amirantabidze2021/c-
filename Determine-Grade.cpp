#include<iostream>
using namespace std;
int main()
{
    int i1;
    cout<<"Enter your test score: ";
    cin>>i1;
    if(i1>89){
        cout<<"Your grade is A";
    }
    else if(i1>79){
        cout<<"Your grade is B";
    } 
    else if(i1>69){
        cout<<"Your grade is C";
    }
    else if(i1>59){
        cout<<"Your grade is D";
    }
    else{
        cout<<"Your grade is F";
    }
    return 0;
}
 
