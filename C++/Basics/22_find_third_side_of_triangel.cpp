#include <iostream>
using namespace std;

int main(){

    int s1,s2,s3;
    cout<<"Input the 1st angle of the triangle: ";
    cin>>s1;
    cout<<"Input the 2nd angle of the triangle: ";
    cin>>s2;
    s3=180-(s1+s2);
    cout<<"The 3rd of the triangle is "<<s3;
return 0;
}