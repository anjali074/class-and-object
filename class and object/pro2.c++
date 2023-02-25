#include<iostream>
using namespace std;
class account{
    string name;
    int acntno;
    char acnttype;
    int bal;
    public:
    int intput(){
        cout<<"Enter name";
        cin>>name;
    cout<<"Enter account number ";
    cin>>acntno;
    cout<<"Enter account type ";
    cin>>acnttype;
    cout<<"Enter balance";
    cin>>bal;
    }
public:
int deposit()
{
    int deposit=0;
    cout<<"Enter deposit amount";
    cin>>deposit;
    bal=deposit+bal;
    cout<<"balance="<<bal;
    }

    public:
    int withdraw(){
int withdraw;

    cout<<"Enter amount to be withdraw";
    cin>>withdraw;
    bal=bal-withdraw;
    cout<<"balance="<<bal;
    
}
public:
int display(){
    cout<<"name is"<<name;
    cout<<"account type  is"<<acnttype;
    cout<<"account number is"<<acntno;
     cout<<"balance="<<bal;
}    

};
int main(){
    account a;
    a.intput();
    a.deposit();
    a.withdraw();
    a.display();


}
