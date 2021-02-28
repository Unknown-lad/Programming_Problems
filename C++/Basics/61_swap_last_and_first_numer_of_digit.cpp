#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //My way
    //it will happen only 4 digits
    /*
    int num,rem,last_digit=0,first_digit=0;
    cout<<"Enter the num: ";
    cin>>num;
    rem=num%10;
    cout<<rem;
    num/=10;
    int size = sizeof(num);
    if(size==4){
        rem=num%100;
        cout<<rem;
        first_digit=num/100;
        cout<<first_digit;
    }
    */

    //w3resource way
    //same problem to this also only 4 digits
    
    int n,nn,first,last,sum,digits,a,b;
    cout << " Input any number: ";
    cin >> n;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    last = n % 10;
    a = first * (pow(10, digits));
    b = n % a;
    n = b / 10;
    nn = last * (pow(10, digits)) + (n * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn << endl;
    

return 0;
}