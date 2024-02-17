#include <iostream>
using namespace std;
int main()
{
    int i1,i2,i3;
    cout<<"Enter a 3 digit number: ";
    cin>>i1;
    if(i1>0){
        i2=i1%10;
        i3=(i1%100-i2)/10;
        i1=i1/100;
    }
    cout<<"Sum is "<<i1+i2+i3;
    return 0;
}
