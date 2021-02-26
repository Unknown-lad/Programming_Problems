#include <iostream>
using namespace std;

int main(){

    int a=10,b=20;
    cout<<"a: "<<a<<"\nb: "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping"<<endl;
    cout<<"a: "<<a<<"\nb: "<<b<<endl;
return 0;
}