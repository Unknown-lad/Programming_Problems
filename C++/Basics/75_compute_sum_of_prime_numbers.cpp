#include <iostream>
using namespace std;

int main(){

   	int i,j,count=0,b=0,num;
    cout<<"Enter a number: ";
    cin>>num;

    for(i=3;i>0;++i)
	{
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0){
				b=1;
				break;
			}
		}
		
		if(b==0)
		{
			cout<<i<<" ";
			count++;
		}
		
		b=0;
		if(count==num)
			break;
	}
 

    
return 0;
}