#include<iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int length,int breadth){
    return length*breadth;
}
float area(float radius)
{
    return 3.14*radius*radius;
}
int main(){
    int side,length,breadth;
    float radius;
    cout<<"Enter the value of side:";
    cin>>side;
    cout<<"Enter the value of length:";
    cin>>length;
    cout<<"Enter the value of breadth:";
    cin>>breadth;
    cout<<"Enter the value of radius:";
    cin>>radius;
    cout<<"Calling the area() function for computing the area of a square:- "<<area(side)<<endl;
    cout<<"Calling the area() function for computing the area of a rectangle:- "<<area(length,breadth)<<endl;
    cout<<"Calling the area() function for computing the area of a circle:- "<<area(radius)<<endl;
    return 0;
}