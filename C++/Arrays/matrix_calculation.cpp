#include <iostream>
using namespace std;

int main(){
    int arr[100][100];
    int arr1[100][100];
    int arr2[100][100];

    int i,j,size;
    cin>>size;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<i<<" "<<j;
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<i<<": "<<j;
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            arr2[i][j]=arr[i][j]*arr1[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout<<arr2[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
return 0;
}