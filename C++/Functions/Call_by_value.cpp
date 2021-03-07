// #include <iostream>
// using namespace std;
// int sum(int ,int );

// int sum(int n1,int n2){
//     int sum;
//     sum=n1+n2;
//     return sum;
// }

// int main(){

//     int a,b;
//     cout<<"Enter nums: ";
//     cin>>a>>b;
//     int add = sum(a,b);
//     cout<<"Sum: "<<add;
    
// return 0;
// }

#include <iostream>
using namespace std;
int add(int ,int);
int min(int);
int add(int n1,int n2){
    int c=n1+n2;
    return c;
}
int min(const int c1){
    int min,c2=5;
    min= c1-c2;
    return min;
}

int main(){
    
    int a,b,c;

    int sum = add(a=10,b=20);//Default arguments
    int sub = min(c=10);
    cout<<"Sum: "<<sum;
    cout<<"\nMin: "<<sub;
return 0;
}