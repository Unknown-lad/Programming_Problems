#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Add 1 to ";
    cin>>num;

    int i,sum=0;
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<"Sum: "<<sum;

return 0;
}