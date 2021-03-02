#include <iostream>
using namespace std;

int main(){

    //Limit is form 1 to 10
    cout<<"the combinition of numbers are:-"<<endl;
    int num,i,j;
    cout<<"Enter Number: ";
    cin>>num;
    for(i=0;i<=num/2;i++){
        for(j=0;j<=num;j++){
            if(i+j==num)
            cout<<i<<"+"<<j<<"="<<num;
        }
    }

return 0;
}