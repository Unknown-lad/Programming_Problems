#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size,i;
    cin>>size;

    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    int item,loc;
    cout<<"item: ";
    cin>>item;

    for(i=0;i<size;i++){
        if(arr[i]==item){
            loc=i;
        }
    }

    cout<<"location: "<<loc<<endl;

    for(i=loc+1;i<size;i++){
        arr[i-1]=arr[i];
    }

    cout<<endl;
    for(i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
return 0;
}