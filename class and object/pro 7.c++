#include<iostream>
using namespace std;
class bank
{
string name;
int acno;
string actype;
float bal;
public:
int get()
{
cout<<"enter name";
cin>>name;
cout<<"enter account numbrer";
cin>>acno;
cout<<"enter account type";
cin>>actype;
}
public:
int deposit()
{
float amt;
cout<<"enter amount";
cin>>amt;
bal=bal+amt;
return bal;
}
public:
int withdraw()
{
float amt;
cout<<"enter amount";
cin>>amt;
bal=bal+amt;
return bal;
}
public:
int display()
{
cout<<name;
cout<<acno;
cout<<actype;
cout<<bal;
}
};
int main()
{
bank b;
b.get();
b.deposit();
b.withdraw();
b.display();
};