#include <iostream>
using namespace std;

int main(){
    
    int a[5]={1,3,3,2,1};
    int i,j;
    int temp[5];
    int count=0;

    for(i=0;i<=5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]==a[j]){
                temp[i]=a[i];
                count++;
            }
        }
    }

    for(i=0;i<count;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
return 0;
}