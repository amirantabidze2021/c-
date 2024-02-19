#include <iostream>
using namespace std;
int main() 
{   
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(1<n&&n<10^8+1&&n%2==0){
        cout<<1.5*n<<" soldiers died";
    }
    return 0;
}
