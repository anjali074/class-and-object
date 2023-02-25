#include<iostream>
#include<string>
using namespace 
std;
class Account
{
 string name;
 string type;
 int acno,bal;
 public:
 Account()
 {
 name=" ";
 type=" ";
 acno=0;
 bal=0;
 }
 Account(string 
n,string t,int a,int b)
 {
 name=n;
 type=t;
 acno=a;
 bal=b;
 }
 Account(Account 
&y)
 {
 name=y.name;
 type=y.type;
 acno=y.acno;
 bal=y.bal;
 }
 void input()
 {
 cout<<"Enter account name,type,account number and amount \n ";
 
cin>>name>>type>>
acno>>bal;
 }
 void deposit()
 {
 int am;
 cout<<"Enter amount to bedeposited\n";
 cin>>am;
 bal+=am;
 
cout<<"Deposited amount is\n"<<bal;
 }
 void withdrawal()
 {
 int am;
 cout<<"Check the balance \n";
 cin>>bal;
 cout<<"Enter amount to be withdrawn\n";
 cin>>am;
 if(am<=bal)
 {
 bal-=am;
 
cout<<"Remaining balance\n"<<bal;
 }
 else
 {
 cout<<"no amount can be withdrawn \n";
 }
 }
 void display()
 {
 cout<<"Name Balance\n"<< name<<bal;
 }
 ~Account()
 {
 cout<<"Inside destructor \n";
 }
};
int main()
{
 Account a;
 Account 
a1("Anjali","Student",
546758,6757);
 Account a2(a1);
 a.input();
 a.deposit();
 a.withdrawal();
 a.display();
 a1.input();
 a1.deposit();
 a1.withdrawal();
 a1.display();
 a2.input();
 a2.deposit();
}
