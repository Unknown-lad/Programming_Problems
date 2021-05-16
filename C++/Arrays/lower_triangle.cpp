#include <iostream>
using namespace std;

int main(){
    
    int arr[100][100];
    int n,i,r;
    cin>>n;

    for(i=0;i<n;i++){
        for(r=0;r<n;r++){
            cin>>arr[i][r];
        }
    }
    
    for(i=0;i<n;i++){
        int val = 0;
        for(r=0;r<n;r++){
            
        }
    }

    for(i=0;i<n;i++){
        for(r=0;r<n;r++){
            if(i<=r){
                //use i>=r for opposite direction
                cout<<arr[i][r];
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }

    cout<<endl;
return 0;
}