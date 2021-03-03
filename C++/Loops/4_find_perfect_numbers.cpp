#include <iostream>
using namespace std;

int main(){

    int sum=0,i=1,u=1;
    cout<<"From 1 to: 500";
    

   while (i <= 500) 
  {
    while (u <= 500) 
    {
      if (u < i) 
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout <<"\n"<< i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }

return 0;
}