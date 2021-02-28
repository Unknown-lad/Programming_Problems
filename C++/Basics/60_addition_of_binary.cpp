#include <iostream>
using namespace std;

int main(){

    long n1,n2;
    int i=0,r=0;
    int sum[30];
    cout<<"Enter 1st binary number: ";
    cin>>n1;
    cout<<"Enter 2nd binary number: ";
    cin>>n2;

    while(n1!=0 || n2!=0){
        sum[i++]=(int)((n1%10+n2%10)%2);
        r=(int)((n1%10+n2%10)/2);
        n1=n1/10;
        n2=n2/10;
    }
    if(r!=0){
        sum[i++]=r;
    }
    --i;
    cout<<"sum of binary number: ";
    while(i>=0){
        cout<<sum[i--]<<" ";
    }
return 0;
}