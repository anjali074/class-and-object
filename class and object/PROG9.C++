#include<iostream>
using namespace 
std;
class student
{
int rollno;
int age;
public:
student()
{
rollno=0;
age=0;
}
student(int 
x,int y)
{
rollno=x;
age=y;
}
student(int z)
{
rollno=age=z;
}
public:
int display()
{
cout<<"roll number is"<<rollno;
cout<<"age is"<<age;
}
};
int main()
{
student s1;
student 
s2(10,20);
student 
s3(30);
s1.display();
s2.display();
s3.display();
}