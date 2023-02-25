#include <iostream>
using namespace std;
class cse
{ public:
double cgpa=0;
 void cs1() 
{
cout<<"Input your cgpa in CSE";
cin>>cgpa;
}
};
class EEE
{ public:
double cgpa=0;
 void e1()
{
cout<<"Input your cgpa in EEE";
cin>>cgpa;
}
};
class civil {
public:
double cgpa=0;
 void c1()
{
cout<<"Input your cgpa in CIVIL;
cin>>cgpa;
}
};
class pg_stud
{
 private :
 int a=0;
 
 public:
 int pg()
{
cout<<"Enter 1 for pg student otherwise 2\n";
cin>>a;
 return a;
 }
};
class mbbs : public pg_stud
{
 public:
 string pg;
 void getdata()
{
 pg_stud st;
if(st.pg()==1) 
{
pg="PG Student";
}
else pg="Non-PG Student";
 }
};
class engineering: public cse, public civil, public EEE
{
 public:
 int a;
double cgp;
 string s=" ";
 cse a1;
 civil a2;
 EEE a3;
 int get() 
{
 cout<<"You have choosed Engineering\nInput the Subject";
 cout<<"\n1= CSE\n2= EEE\n3=Civil\n";
 cin>>a;
 switch(a)
 {
 case 1:
 s="CSE";
 a1.cs1();
 cgp=a1.cgpa;
 break;
 case 2:
 s="EEE";
 a2.c1();
 cgp=a2.cgpa;
 break;
 case 3:
 s="Civil";
 a3.e1();
 cgp=a3.cgpa;
 break;
default: cout<<"you have entered wrong choice.\n";
 }
 }
};
class medical: public mbbs 
{
 public:
 double a=0;
 string p="";
 void get() 
{cout<<"You have choosed Medical, Please Input your cgpa in Medical.\n";
cin>>a;
medical qw;
qw.getdata();
p=qw.pg;
 }
};
class arts
{
 public:
 double a=0;
 void get() 
{
 cout<<"You have choosed Arts, Please Input your cgpa in arts.\n";
cin>>a;
 }
};
class student : public engineering, public medical, public arts 
{
 public:
 string n,s="",pg="";
 int q=0;
 double cgp;
 
 engineering qw1;
 medical qw2;
arts qw3;
 void details(string n,int q) 
{
 switch(q)
 {
 case 1:
 {
qw1.get();
s=qw1.s;
cgp=qw1.cgp;
cout<<n<<" is an Engineering student of "<<s<<" Branch got "<<cgp<<" CGPA";
 break;
 }
 case 2:
 {
 qw2.get();
 pg=qw2.p;
 cgp=qw2.a;
 cout<<n<<" is a Medical "<<pg<<" and have got "<<cgp<<" CGPA.";
 break;
}
case 3:
 {
 qw3.get();
 cgp=qw3.a;
 cout<<n<<" is an Arts student and have got "<<cgp<<" CGPA.";
 break;
}
default : cout<<"you have entered wrong choice.\n";
 }
 }
};
int main() 
{
 
 string n;
 int q=0;
 
 cout<<"Input name of Student\n";
 cin>>n;
 cout<<"Choose a no. for branch:\n1=engineering\n2=medical\n3=arts\n";
 cin>>q;
 student ab;
 ab.details(n,q);
 
 return 0;
}
