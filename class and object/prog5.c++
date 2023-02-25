#include<iostream>
 using namespace std;
 class admission
 {
int admno;
string name;
string cls;
float fees;
public:
int readdata()
{
cout<<"enter admission number";
cin>>admno;
cout<<"enter name";
cin>>name;
cout<<"enter class";
cin>>cls;
cout<<"enter fees";
cin>>fees;
}
public:
int display()
{
cout<<"admission number is"<<admno;
cout<<"name is"<<name;
cout<<"class is"<<cls;
cout<<"fees is"<<fees;
}
};
int main()
{
admission a;
a.readdata();
a.display();
}
