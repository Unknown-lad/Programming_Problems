#include <iostream>
using namespace std;

int main(){

    int num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    int i,rem,sum=0;

    for(i=0;i<num;i++){
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    cout<<"Sum is: "<<sum<<endl;
    if(sum>=1 && sum<10){
        count=1;
        cout<<"Numbers of digits in sum value: "<<count;
    }if(sum>=10 && sum<100){
        count=2;
        cout<<"Numbers of digits in sum value: "<<count;
    }
return 0;
}