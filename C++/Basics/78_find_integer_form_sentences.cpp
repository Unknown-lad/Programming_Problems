#include <iostream>
#include <sstream>
using namespace std;
void getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; 
   string temp_str;
   int temp_int,sum=0;
   while(!str_strm.eof()) {
      str_strm >> temp_str; 
      if(stringstream(temp_str) >> temp_int) { 
         cout << temp_int << " ";
         sum=sum+temp_int;
      }
      temp_str = ""; 
   }
   cout<<"\n"<<sum;
}

main(){

    string my_str = "There are 12 chairs, 15 desks, 1 blackboard and 2 fans";
    getNumberFromString(my_str);
    
return 0;
}   