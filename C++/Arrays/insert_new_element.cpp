#include <iostream>
using namespace std;

int main(){

    int arr[100],i,size,loc;
    cin>>size;

    for(i=0;i<size;i++){
        cout<<i<<": ";
        cin>>arr[i];
    }

    int item;
    cout<<"Item: ";
    cin>>item;

    for(i=0;i<size;i++){
        if(item<arr[i]){
            loc=i;
            break;
        }
    }

    for(i=size-1;i>=loc-1;i--){
        arr[i+1]=arr[i];
        arr[loc]=item;
    }

    for(i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
return 0;
}