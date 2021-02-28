#include <iostream>
using namespace std;

int main(){

    int num;
    bool primes[num];
    cout<<"Enter the number: ";
    cin>>num;
     for (int i=2; i<num; i++) 
    {
        num=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
            {
                num=false;
                if(primes[i] && primes[i-2]){
                    cout<<i-2<<" "<<i<<endl;
                }
                break;    
            }
        }   
        if(num) cout << i << " ";
    }

return 0;
}