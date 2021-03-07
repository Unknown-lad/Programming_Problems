#include <iostream>
using namespace std;
void TOH(int a,char t1,char t2, char t3){
    if(a==1){
        cout<<"\nshift top disk from tower"<<t1<<" to tower "<<t2;
    }
    TOH(a-1,t1,t2,t3);
    cout<<"\nshift top disk from tower "<<t1<<" to tower"<<t2;
    TOH(a-1,t3,t2,t1);
}

int main(){

    int disk;
    cin>>disk;
    if(disk<1)
    cout<<"No disk shift\n";
    else
    cout<<disk<<" disk are there in tower 1";

    TOH(disk,'1','2','3');
    cout<<disk<<"disks in tower 1 shifted to tower 2";

return 0;
}