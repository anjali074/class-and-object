#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    int salary;
    public:
    int intput(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter salary";
         cin>>salary;
    }
    public:
    int display(){
        cout<<"employee details are";
        cout<<"name is"<<name;
        cout<<"salary is"<<salary;
    }

    };
    int main(){
        employee e;
        e.intput();
        e.display();

    }
        
