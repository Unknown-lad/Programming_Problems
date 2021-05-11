#include <iostream>
using namespace std;

int main(){
    
    int LOC=0,MAX,K=-1,N=10;
    int arr[10]={11,3,4,5,6,7,8,9,10};

    MAX=arr[0];

    while (K<N)
    {
        if(MAX<arr[K]){
            // LOC=K;
            MAX=arr[K];
            cout<<arr[K]<<" "<<K<<" "<<MAX<<endl;
        }
        K++;
    }
    
    cout<<"LOC: "<<LOC<<"\nMAX: "<<MAX<<endl;
    
return 0;
}