#include<iostream>
using namespace std;
int m=10;
int main(){
    int m=20;
    {
        int k=m;
        int m=30;
        cout<<"Control is present in inner block"<<endl;
        cout<<"k="<<k<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
    }
    cout<<"Control is present in outer block"<<endl;
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m<<endl;
    return 0;
}