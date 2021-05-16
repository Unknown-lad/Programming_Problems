#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int n,i,r,temp=0;
    cin>>n;

    for(i=0;i<n;i++){
        for(r=0;r<n;r++){
            cin>>arr[i][r];
        }
    }

    for(i=0;i<n;i++){
        for(r=0;r<n;r++){
            cout<<arr[i][r];
        }
        cout<<endl;
    }

    cout<<endl;
    for(i=0;i<n;i++){
        for(r=0;r<n;r++){
            if(arr[i]==arr[r]){
                cout<<arr[i][r];
                
            }
        }
    }

    cout<<endl;
    
return 0;
}