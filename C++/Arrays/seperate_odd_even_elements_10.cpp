#include <iostream>
using namespace std;

int main(){
    
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;

    cout<<"Odd Numbers: -"<<endl;
    for(i=0;i<10;i++){
        if(i%2==0){
            cout<<a[i]<<" ";
        }
    }

    cout<<"\nEven Numbers: "<<endl;
    for(i=0;i<10;i++){
        if(i%2!=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
return 0;
}