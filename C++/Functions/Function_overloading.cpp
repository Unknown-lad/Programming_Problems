//Only the parameter will be different and the fucntion call be call many times
#include <iostream>
using namespace std;
int calc(int ,int);
int calc(int);

int calc(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int calc(int sr){
    return sr*sr;
}

int main(){

    int a,b,sr;
    cin>>sr;
    cout<<calc(sr)<<endl;
    cin>>a>>b;
    cout<<calc(a,b);

return 0;
}