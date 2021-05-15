#include <iostream>
using namespace std;

int main(){
    
    int a[5]={1,2,3,9,10};
    int b[5]={4,5,6,7,8};
    int c[10];

    int i,j,temp=0,k;

    for (i = 0; i < 5; i++)
    {
        c[i]=a[i];
    }

    j=i;

    for(i=0;i<5;i++){
        c[j]=b[i];
        j++;
    }

    for(i=0;i<10;i++){
        for(k=i;k<10;k++){
            if(c[i]>c[k]){
                temp=c[i];
                c[i]=c[k];
                c[k]=temp;
            }
        }
    }

    for(i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    
    cout<<endl;
return 0;
}