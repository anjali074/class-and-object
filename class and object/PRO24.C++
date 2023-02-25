#include <iostream>
using namespace std;
class pass
{ public:
 void pa(string s) 
{
cout<<"Nice "<<s<<", You will own a Passenger Vehicle."<<endl;
}
};
class goods
{ public:
 void go(string s) 
{
cout<<"Nice "<<s<<", You will own a Goods Vehicle."<<endl;
}
};
class gear
{ public:
 void ge(string s) 
{
cout<<"Nice "<<s<<", You will own a Gear Vehicle."<<endl;
}
};
class non_gear
{ public:
 void nge(string s) 
{
cout<<"Nice "<<s<<", You will own a Non-Gear Vehicle."<<endl;
}
};
class elec
{ public:
 void ele(string s) 
{
cout<<"Nice "<<s<<", You will own a Electric Vehicle."<<endl;
}
};class lt : public gear, public non_gear, public elec
{ public:
int a;
 void tt(string s)
{ lt w;
cout<<"Which type of light vehicle you want:"<<endl;
cout<<"1= Gear Bike\n2= Non-Gear Vehicle\n3= Electric Vehicle"<<endl;
cin>>a;
switch(a)
{
case 1: w.ge(s);
break;
case 2: w.nge(s);
break;
case 3: w.ele(s);
break;
dafault : cout<<"Wrong choice";
break;
}}
};
class hv : public pass, public goods
{ public:
int a;
 void nt(string s)
{ hv q;
cout<<"Which type heavy vehicle you want:"<<endl;
cout<<"1= Passenger Vehicle2= Goods Vehicle"<<endl;
cin>>a;
switch(a)
{
case 1: q.pa(s);
break;
case 2: q.go(s);
break;
dafault : cout<<"Wrong choice\n";
break;
}}
};
class veh : public lt, public hv
{public:
int a=0;
 void details(string s)
{
veh q;
cout<<"Which type of vehicle you have:\n1= Light Vehicle\n2= Heavy Vehicle\n";
cin>>a;
switch(a)
{
case 1: q.tt(s);
break;
case 2: q.nt(s);
break;
dafault : cout<<"Wrong choice";
break;
}}
};
int main() 
{
 string s; 
 cout<<"Input your name";
 cin>>s;
 veh qw;
 qw.details(s);
 return 0;
}