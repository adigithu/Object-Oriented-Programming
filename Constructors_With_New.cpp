#include<iostream>
#include<cstring>
using namespace std;
class String{
    char *name;
    int len;
    public:
        String(){
            len=0;
            name=new char[len+1];
        }
        String(char *s){
            len=strlen(s);
            name=new char[len+1];
            strcpy(name,s);
        }
        void display(void){
            cout<<name<<endl;
        }
        void join(String &a,String &b);
};
void String :: join(String &a,String &b){
    len=a.len+b.len;
    delete name;
    name=new char[len+1];
    strcpy(name,a.name);
    strcpy(name,b.name);
};
int main(){
    char *first="Joseph ";
    String name1(first), name2("Louis "),name3("Lagrange"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();
    return 0;
}