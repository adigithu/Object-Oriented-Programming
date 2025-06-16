#include<iostream>
using namespace std;
inline float mul(float x,float y){
    return (x*y);
}
inline double div(double p,double q){
    return (p/q);
}
int main(){
    float a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
}