#include <iostream>
using namespace std;

class Static_memeber{
    public:
    static int count;

    void getdata(int i,int j){
        int a,b;
        a = i;
        b= j;
        count++;
    }
    void displayData(void);
};

int Static_memeber :: count;

void Static_memeber::displayData(void){
    cout<<"count: "<<count<<endl;
}

int main(){
    
    Static_memeber st, st2, st3;
    st.getdata(2,4);
    st.displayData();

    st2.getdata(4,2);
    st2.displayData();

    st3.getdata(22,44);
    st3.displayData();

return 0;
}