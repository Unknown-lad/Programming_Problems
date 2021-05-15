#include <iostream>
using namespace std;
int frequency_check(int);

int main(){
    
    int a[10] = {1,2,3,4,3,2,1,3,4,5};
    int i,j,count=0;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[i]==a[j]){
                count++;
            }
            else{
                count=0;
            }
        }
    }

    for(i=0;i<10;i++){
        cout<<a[i]<<" "<<count<<endl;
    }

return 0;
}

