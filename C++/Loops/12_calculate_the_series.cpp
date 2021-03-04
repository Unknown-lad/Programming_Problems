#include <iostream>
using namespace std;

int main(){

    int num,sum=0;
    cin>>num;
    
    for(int i=1;i<=num;i++){
        sum=sum+i*i;
        cout<<i<<"*"<<i<<"= "<<i*i<<endl;
    }
    cout<<sum;

return 0;
}