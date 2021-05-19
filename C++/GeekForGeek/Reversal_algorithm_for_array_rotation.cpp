#include <iostream>
using namespace std;

//maily algorithim tells two seperate the array in 2 parts arr[n]={1,2,3,4,6} , d=2
//seperate in 2 section first less to d and another upto n arr[d]={1,2},arr[n]={3,4,5}
//then reverse both the array using swap methord
//then finally reverse both and in range from 0 to n-1

void reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void leftShift(int arr[],int n,int d){
    if(d==0)
        return;
    d=d%n;

    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

void printArray(int arr[],int n,int d){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int t,j=0;
    cin>>t;
    while(j<t){

        int arr[50];
        int i,n,d;
        cin>>n>>d;

        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        leftShift(arr,n,d);
        printArray(arr,n,d);

        j++;
        cout<<endl;
    }

return 0;
}