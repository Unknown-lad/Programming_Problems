#include <iostream>
using namespace std;

int main(){
    
    int arr[40][40];
    int i,j,n;

    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Row Sum: "<<endl;
    for(i=0;i<n;i++){
        int rsum=0;
        for(j=0;j<n;j++){
            rsum=rsum+arr[j][i];
        }
        cout<<rsum<<" ";
    }
    
    cout<<endl;
    cout<<"Coloum Sum: "<<endl;
    for(i=0;i<n;i++){
        int csum = 0;
        for(j=0;j<n;j++){
            csum=csum+arr[i][j];    
        }
        cout<<csum<<" ";
    }

    cout<<endl;
return 0;
}