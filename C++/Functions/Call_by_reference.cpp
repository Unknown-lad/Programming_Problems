#include <iostream>
using namespace std;
void swap(int*, int*);

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"A: "<<*x<<" B: "<<*y;
}

int main(){

    int a,b;
    cout<<"Enter num: ";
    cin>>a>>b;
    cout<<"A: "<<a<<" B: "<<b;
    cout<<"\n";
    swap(&a,&b);

return 0;
}