#include<iostream>
using namespace std;
class student
{
string name;
int 
rollno,sem,cursem,totalsub,totalm;
double 
fee,avg;
public:
student()
{
 name="ANJALI";
 rollno=07;
 sem=8;
 cursem=3;
 totalsub=5;
 totalm=750;
 fee=2500;
 
avg=totalm/totalsub; }
student(string n,int r,int s,int c,int t,int tt,double f)
{
name=n;
rollno=r;
sem=s;
cursem=c;
totalsub=t;
totalm=tt;
fee=f;
avg=tt/t;
}
student(student &x)
{
name=x.name
;
rollno=x.rollno;
sem=x.sem;
cursem=x.cursem;
totalsub=x.totalsub;
totalm=x.totalm;
fee=x.fee;
avg=totalm/totalsub;
}
public:
int display()
{
cout<<"details:";
cout<<"name is"<<name;
cout<<"roll number "<<rollno;
cout<<"semester"<<sem;
cout<<"current semester"<<cursem;
cout<<"fees is"<<fee;cout<<"totalsub is"<<totalsub;
cout<<"total marks is"<<totalm;
cout<<"average marks is"<<avg;
}
};
int main()
{
student s1;
student 
s2("ram",65.6,5,7,5,8768,8768);
student 
s3(s2);
s1.display();
s2.display();
s3.display();
}