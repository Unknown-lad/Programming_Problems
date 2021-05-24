#include <iostream>
using namespace std;

class Function_overloading{

    public:
    int a,b;
    void voloume(int i,int j);

    void getdata(int i, int j){
        a=i;
        b=j;
    }

    void showdata(void){
        cout<<a<<b<<endl;
    }

    void showdata(int alu){
        cout<<alu<<endl;
    }

    void voloume(int a){
        cout<<a<<endl;
    }

};

void Function_overloading :: voloume(int i,int j){
    cout<<i<<j<<endl;
}


int main(){
    
    Function_overloading f;
    f.voloume(2,4);
    f.getdata(3,5);
    f.showdata();
    f.showdata(444);
    f.voloume(44);
    
return 0;
}