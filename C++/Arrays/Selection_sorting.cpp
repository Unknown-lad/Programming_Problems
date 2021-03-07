#include <iostream>
using namespace std;

int main(){

    int len;
    cout<<"Enter the lenght: ";
    cin>>len;
    int arr[len],loc,min,i,j,temp=0;

    for(i=0;i<len;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    //algorithms of selection sorting
    for(i=0;i<len-1;i++){
        min=arr[i];
        loc=i;
        for(j=i+1;j<len;j++){
            if(arr[j]>min){
                min=arr[j];
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    //prints the output
    for(i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}