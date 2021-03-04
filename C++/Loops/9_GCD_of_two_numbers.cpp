#include <iostream>
using namespace std;

int main(){

    int r,c,i,j;
    cin>>r;
    cin>>c;

    for(i=1;i<=r && i<=c; i++){
        if(r%i==0 && c%i==0){
            j=i;
        }
    }

    cout<<j;

return 0;
}