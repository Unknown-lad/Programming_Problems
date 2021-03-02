#include <iostream>
using namespace std;

int main(){

  /*Single Character
  char upper, lower;
  int asci;
  cout<<"Enter character: ";
  cin>>lower;
  asci=lower;
  asci=asci-32;
  upper=asci;
  cout<<"UpperCase: "<<upper;
  */
 char stupper[50],stlower[50];
 int asci,i=0,wk=0;
 cout<<"Enter the string: ";
 gets(stlower);
 while(stlower[i]!='\0'){
   if(stlower[i]>='a' && stlower[i]<='z'){
     asci=stlower[i];
     asci=asci-32;
     stupper[i]=asci;
   }
   else
     stupper[i]=stlower[i];
     i++;
 }
 stupper[i]='\0';
 if(wk==0)
  cout<<"String is already upper case";
  else
  cout<<"Upper case String: "<<stupper;

return 0;
}