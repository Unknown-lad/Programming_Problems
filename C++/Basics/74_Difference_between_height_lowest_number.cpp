#include <iostream>
using namespace std;

int main(){

    int len;
    int arr[len];
    int i,dif,lar,smll;

    cout<<"Enter Length: ";
    cin>>len;
    cout<<"Enter Number: ";
    for(i=0;i<len;i++){
        cin>>arr[i];
    }

    for(i=0;i<len;i++){
        lar=arr[0];
        if(lar<arr[i])
            lar=arr[i];
    }
    cout<<"Large number: "<<lar;
    for(i=0;i<len;i++){
        smll=arr[0];
        if(smll>arr[i])
        smll=arr[i];
    }
    cout<<"Small Number: "<<smll;
    
    dif=lar-smll;
    cout<<"Difference: "<<dif;
return 0;
}