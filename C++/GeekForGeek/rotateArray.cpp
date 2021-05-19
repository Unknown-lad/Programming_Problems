#include <iostream>
using namespace std;

int main(){
    int i;
    int t;
    cin>>t;
    
    while(i<t){
        
        int arr[100];                                                                                                                                                                                                                                               
        int n,d,r;
        cin>>n>>d;
        int temp[d];
        
        for(r=0;r<n;r++){
            cin>>arr[r];
        }
        for(r=0;r<d;r++){
            temp[r]=arr[r];
        }
        for(r=d;r<n;r++){
            cout<<arr[r]<<" ";
        }
        for(r=0;r<d;r++){
            cout<<temp[r]<<" ";
        }
        
        cout<<endl;
        i++;
    }

    cout<<endl;
return 0;
}