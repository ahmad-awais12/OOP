#include<iostream>
using namespace std;

class Employee
{
private:
    int x;
public:
int z=13;
    void setdata(int x1){
        x=x1;
    }
    void show(){
        cout<<"your salary is:"<<x;
         cout<<"your grade is:"<<z;
    }

};
int main(){
    int p;
    Employee T;
    //T.z=12;
    //T.x=10; not possible
    cout<<"enter your salary:";
    cin>>p;
    T.setdata(p);
    T.show();
}

