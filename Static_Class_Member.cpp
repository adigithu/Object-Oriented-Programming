#include<iostream>
using namespace std;
class item{
    static int count;
    int num;
    public:
        void getdata(int a){
            num=a;
            count++;
        }
        void getcount(void){
            cout<<"Count:"<<count<<endl;
        }
};
int item :: count;
int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"After reading data:"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}