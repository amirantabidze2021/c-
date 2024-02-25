#include <iostream>
using namespace std;
int main()
{
    int i1; 
    cout<<"Enter your year: ";
    cin>>i1;
    if(i1%4==0){
        cout<<"It is leap year";
    }else{
        cout<<"It is not a leap year";
    }
    return 0;
}
