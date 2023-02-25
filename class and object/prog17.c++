#include <iostream>
#include <string> 
using namespace std;
class person
{
public:
 string name;
 int age;
 string address;
 void getdetails()
 {
 cout << "Enter name  ";
 cin >> name;

 cout << "Enter age  ";
 cin >> age;
 cout << "Enter address  ";
 cin >> address;
 }
 void display()
 {
 cout << "\n ----------------\n";
 cout << "\nName  " << name;
 cout << "\nAge " << age;
 cout << "\nAddress  " << address;
 }
};
class student : public virtual person
{
public:
 int roll;
 string branch;
 void read()
 {
 cout << "Enter roll  ";
 cin >> roll;
 cout << "Enter branch ";
 cin >> branch;
 }
 void show()
 {
 cout << "\nRoll " << roll;
 cout << "\nBranch " << branch;
 }
};
class exam : public student
{

public:
 int marks[5];
 void read()
 {
 cout << "Enter marks in all 5 subject (out of 100) :" << endl;
 for (int i = 0; i < 5; i++)
 cin >> marks[i];
 }
 void show()
 {
 cout << "\nMarks are :" << endl;
 for (int i = 0; i < 5; i++)
 cout << marks[i]<<" ";
 }
};
class sports : public virtual person
{
public:
 int spmarks;
 void read()
 {
 cout << "Enter sports marks out of 100 : ";
 cin >> spmarks;
 }
 void show()
 {
 cout << "\nSports marks : " << spmarks; 
 }
};
class result : public exam, public sports
{
 int totalmarks;
 char grade;

public:
 void calculate()
 {
 for (int i = 0; i < 5; i++){
 totalmarks += marks[i];
 totalmarks += spmarks;
 }
 if (totalmarks > 550){
 grade = 'A';
 }
 else if (totalmarks > 500){
 grade = 'B';
 }
 else if (totalmarks > 450){
 grade = 'C';
 }
 else if (totalmarks > 400){
 grade = 'D';
 }
 else{
 grade = 'F';
 }
 cout << "\nTotal marks Academic and Sports  " << totalmarks;
 cout << "\nGrade  " << grade;
 }
};
int main()
{
 result r;

 r.getdetails();
 r.student::read();
 r.exam::read();
 r.sports::read();
 r.display();
 r.student::show();
 r.exam::show();
 r.sports::show();
 r.calculate();
 return 0;
}

