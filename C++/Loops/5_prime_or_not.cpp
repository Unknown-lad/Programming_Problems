#include <iostream>
using namespace std;

int main(){

    int num,i,ctr=0;
    cin>>num;

    for(i=1;i<=num;i++){
        if(num%i==0)
        ctr++;
    }
    if(ctr==2)
    cout<<"prime Number";
    else
    cout<<"Not Prime Number";

return 0;
}