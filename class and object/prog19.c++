#include<iostream>
using namespace std;

class Student{

int roll_no;

char name[30];

int grade; public:

// Declaration of functions void readdata();
void readdata();
void displaydata();
};
// Defining the functions outside the class

void Student::readdata(){

cout <<endl<< "Enter Roll No. \\";

cin >> roll_no;

cout << "Enter Name";

cin >> name; 
cout << "Enter Grade: ";

cin>> grade;
}
void Student::displaydata(){

cout << roll_no << "\t";

cout << name << "\t";

cout << grade << "";
 cout << endl;
}
int main(){

//This is an array of objects having // maximum limit of 3 Students

Student stu[3];

int n, i;

n=3;
cout << endl<<"---------------- "<<endl;
cout << "Student's Data cout "<< "Roll No"<<"\t "<< "Grade" << endl;

//Accessing the function for displaying stored data

for(i=0; i < n; i++) {
  stu[i].displaydata();
}
}