#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    char s[30];
    int i;

    cout<<"Write boss: ";
    cin>>s;

    for(i=0;i<=strlen(s);i++){
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
    }
    cout<<"The entered string in uppercase: "<<s;
return 0;
}