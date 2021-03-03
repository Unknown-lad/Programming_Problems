#include <iostream>
using namespace std;

int main(){

    int num,ctr=0;
    cin>>num;

    for(int i=num-1;i>=1;i--){
        for(int j=2;j<i;j++){
            if(i%j==0){
                ctr++;
            }
        }
        if(ctr==0){
            if(i==1){
                cout<<"no prime less then 2";
                break;
            }
            cout<<i<<" last digit of prime number "<<num;
            break;
        }
        ctr=0;
    }
return 0;
}