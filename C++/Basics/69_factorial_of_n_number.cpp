#include <iostream>
using namespace std;

int main(){

    cout<<"Factorial of given input: "<<endl;
    int num,i,fac=1;
    cout<<"Number: ";
    cin>>num;

    for(i=1;i<=num;i++){
        fac=fac*i;
    }

    cout<<"Factorial: "<<fac<<endl;
return 0;
}