#include <iostream>
using namespace std;

int main(){

    int arr[100][100];
    int i,j,size;

    cin>>size;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<i<<" "<<j<<" ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}