#include <iostream>
using namespace std;

int main(){

    int i,len,sum=0;
    cout<<"Enter length: ";
    cin>>len;

    for(i=0;i<=len;i++){
        sum=sum+i;
    }
    cout<<"Sum of "<<len<<" natural numbers: "<<sum;
return 0;
}