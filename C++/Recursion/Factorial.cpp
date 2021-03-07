#include <iostream>
using namespace std;
int fac(int );
int fac(int n){
    if(n==0)
    return 1;
    return(n*fac(n-1));
}

int main(){

    int num;
    cin>>num;
    cout<<fac(num);

return 0;
}