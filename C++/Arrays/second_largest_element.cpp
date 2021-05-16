#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size,i,j;
    cin>>size;

    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    int temp = 0;
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<size;i++){
       if(arr[i]==arr[1]){
           cout<<arr[i];
       }
    }

    cout<<endl;
return 0;
}