#include <iostream>
using namespace std;

int main(){

    int arr[]={2,4,6,1,9,0,99};
    int temp,i,j;
    cout<<"Desending of 7 digits :"<<endl;
    cout<<"Descending odear: ";

    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}