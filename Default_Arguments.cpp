#include<iostream>
using namespace std;
int main(){
    float amount;
    float value(float p,int n,float r=0.15);
    amount=value(5000.00,5);
    cout<<"Final Value="<<amount<<endl;
    amount=value(10000.00,5,0.30);
    cout<<"Final Value="<<amount<<endl;
    return 0;
}
float value(float p,int n,float r){
    int year=1;
    float sum=p;
    while (year<=n){
        sum=sum*(1+r);
        year=year+1;
    }
    return sum;
}