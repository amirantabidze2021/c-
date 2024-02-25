#include <iostream>
using namespace std;
int main()
{
    char i1;
    cout<<"Enter a chatachter: ";
    cin>>i1; 
    if(i1=='a'|i1=='e'|i1=='i'|i1=='o'|i1=='u'){
        cout<<"Charchter is a vowel";
    }else{
        cout<<"Charachter is a constant";
    }
    return 0;
}
