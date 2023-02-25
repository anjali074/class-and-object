  #include <iostream>
using namespace std;
class sec
{ public:
 void se(string s) 
{
cout<<"Nice "<<s<<", You are a Security Guard of our College"<<endl;
}
};
class lab
{ public:
 void la(string s) 
{
cout<<"Nice "<<s<<", You are a Lab Assistant in all Department"<<endl;
}
};
class mec
{ public:
 void me(string s){
cout<<"Nice "<<s<<", You are Facualty of Mechanical Department"<<endl;
}
};
class eee
{ public:
 void ee(string s) 
{
cout<<"Nice "<<s<<", You are Facualty of Electrical Department"<<endl;
}
};
class civil{ public:
 void ci(string s) 
{
cout<<"Nice "<<s<<", You are Facualty of CIVI Department"<<endl;
}
};
class cse
{ public:
 void cs(string s) 
{
cout<<"Nice "<<s<<", You are Facualty of Computer Science Department"<<endl;
}
};
class te : public cse, public civil, public eee, public mec
{ public:
int a;
 void tt(string s)
{ te w;
cout<<"Which Course Faculty do you claim?"<<endl;
cout<<"1= CSE\n2= EEE\n3= CIVIL\n4= MEC"<<endl;
cin>>a;
switch(a)
{
case 1: w.cs(s);
break;
case 2: w.ee(s);
break;
case 3: w.ci(s);
break;
case 4: w.me(s);
break;
dafault : cout<<"Wrong choice\n";
break;
}}
};
class non_t : public sec, public lab
{ public:
int a;
 void nt(string s)
{ non_t q;
cout<<"Which type of non-teaching staff are you"<<endl;
cout<<"1= Security Guard\n2= Lab Assistance"<<endl;
cin>>a;
switch(a)
{
case 1: q.se(s);
break;
}}
};
class staff : public non_t, public te
{public:
int a=0;
 void details(string s)
{
staff q;
cout<<"Which type of staff are you:\n1= Teaching\n2= Non-Teaching\n";
cin>>a;
switch(a)
{
case 1: q.tt(s);
break;
case 2: q.nt(s);
break;
dafault : cout<<"Wrong choice\n";
break;
}}};

int main() 
{
 string s;
 cout<<"Input your name\n";
 cin>>s;
 staff qw;
 qw.details(s);
 return 0;
}