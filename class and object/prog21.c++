#include<iostream>
using namespace std;

class account
{
private:
string name;
int accno;
string atype;
public:
void  getAccountDetails()
{
cout<<"Enter Customer Name";
cin>>name;
cout<<"Enter Account Number";
cin>>accno;
cout<<"Enter Account Type    : ";
cin>>atype;
 }
void displayDetails()
{
cout<<"Customer Name"<<name;
cout<<"Account Number"<<accno;
cout<<"Account Type"<<atype;
    }
};
class current_account : 
public account
{
private:
    float balance;
public:
void display()
{
 cout<<"Balance"<<balance;
}
void deposit()
{
float deposit;
cout<<"Enter amount to Deposit";
cin>>deposit;
balance = balance + deposit;
}
void withdraw()
{
float withdraw;
cout<<"Balance "<<balance;
cout<<"Enter amount to be withdraw :";
cin>>withdraw;
if(balance > 1000)
{
balance=balance-withdraw;
cout<<"Balance Amount After Withdraw: "<<balance;
}
else
{
cout<<"Insufficient Balance";
}
 
}
 
 
};
 
class saving_account :
 public account
{
private:
float sav_balance;
public:
void s_display()
{
cout<<"Balance "<<sav_balance;
 }
void s_deposit()
{
 float deposit,interest;
cout<<"Enter amount to Deposit :  ";
cin>>deposit;
sav_balance = sav_balance + deposit;
interest=(sav_balance*2)/100;
sav_balance=sav_balance+interest;
}
void s_withdraw()
{
float withdraw;
cout<<"Balance"<<sav_balance;
cout<<"Enter amount to be withdraw";
cin>>withdraw;
if(sav_balance > 500)
{
sav_balance=sav_balance-withdraw;
cout<<"Balance Amount After Withdraw"<<sav_balance;
}
else
{
cout<<"Insufficient Balance";
}
}
};
 
 
 
int main()
{
current_account c1;
saving_account s1;
char type;
cout<<"Enter S for saving customer and C for current a/c customer";
cin>>type;
int choice;
if(type=='s' || type=='S')
{
s1.getAccountDetails();
while(1){
cout<<"Choose Your Choice"<<endl;
cout<<"Deposit"<<endl;
cout<<"Withdraw"<<endl;
 cout<<"Display Balance"<<endl;
cout<<"Display with full Details"<<endl;
cout<<"Exit"<<endl;
cout<<"Enter Your choice";
cin>>choice;
switch(choice)
{
case 1 :
s1.s_deposit();
 break;
case 2 :
s1.s_withdraw();
break;
case 3 :
s1.s_display();
break;
case 4 :
s1.displayDetails();
s1.s_display();
break;
case 5 :

default:
cout<<"Entered choice is invalid";
 }
      
 } 
 }
else if(type=='c' || type=='C')
{
 c1.getAccountDetails();
  while(1)
 {
  cout<<"Choose Your Choice"<<endl;
cout<<" Deposit"<<endl;
cout<<"Withdraw"<<endl;
cout<<"Display Balance"<<endl;
cout<<"Display with full Details"<<endl;
cout<<" Exit"<<endl;
cout<<"Enter Your choice ";
cin>>choice;
switch(choice)
{
case 1 :
c1.deposit();
break;
case 2 :
c1.withdraw();
break;
case 3 :
 c1.display();
break;
case 4 :
c1.displayDetails();
 c1.display();
break;
case 5 :
 
default:
 cout<<"Entered choice is invalid";
  }
}
 }
else
 {
 cout<<"Invalid Account Selection"<<endl;
}

cout<<"Thank You for Banking with us"<<endl;
}
