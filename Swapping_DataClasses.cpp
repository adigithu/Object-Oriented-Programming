#include<iostream>
using namespace std;
class class_2;
class class_1{
    int val1;
    public:
        void indata(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
        friend void exchange(class_1 &,class_2 &);
};
class class_2{
    int val2;
    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
        friend void exchange(class_1 &,class_2 &);
};
void exchange(class_1 & x,class_2 & y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    class_1 C1;
    class_2 C2;
    C1.indata(100);
    C2.indata(200);
    cout<<"Values before exchange"<<endl;
    C1.display();
    C2.display();
    exchange(C1,C2);
    cout<<"Values after exchange"<<endl;
    C1.display();
    C2.display();
    return 0;
}