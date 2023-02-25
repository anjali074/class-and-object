#include<iostream>
using namespace std;
class student
{
int rollno;
char 
name[20];
char cls[5];
int marks;
float 
percentage;
public:
int calculate()
{
 int sum=0,i;
for(i=0;i<5;i++)
{
 
sum=sum+marks;
}
percentage=(sum/5);
return percentage;
}
public:
 int input()
 {
 cout<<"enter name";
 cin>>name;
 cout<<"enter class";
 cin>>cls;
 cout<<"enter roll number";
 cin>>rollno;
 cout<<"marks is";
 for(int i=0;i<5;i++)
 cin>>marks;
 
}
public:
int display()
{
cout<<"name is"<<name;
cout<<"roll number is"<<rollno;
cout<<"class is"<<cls;
cout<<"oercentage is"<<percentage;
}
};
int main()
{
student s;
s.calculate();
s.input();
s.display();
}