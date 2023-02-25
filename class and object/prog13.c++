#include<iostream> 
using namespace std;

class Time {

private:

int hours;

int minutes;

public:
 
Time() {

cout <<"Hours \t";
 cin>> hours;

cout<<"Minute\t";
cin>> minutes;
}
Time(int h, int m){

hours = h;
minutes = m;
}
void addTine(Time ti ,Time t2) {
  minutes = t1.minutes + t2.minutes;
hours= t1. hours + t2. hours + (minutes/ 60);

minutes%=60;
void displayTime()
 { 
  cout <<endl<<"Time: "<< hours;
 }
if (hours>1){

(cout << Hours and " else cout << Hour and ");
}
else{
  cout<<"hour";
cout << minutes;
}
if (minutes>1){

cout << Minutes;
} 

else { 
  cout <<" Minutes";
}
  if(minutes>1){
    cout <<" Minutes";
  }
else{
  cout <<" Minutes";
}

int main() 
{ 
  cout << "Enter below the details of the First Time to beadd"<<endl; Time ti; 
  cout << "Enter below the details of the Second Time to be added: " << endl;

Time t2;

Time t3(0, 0);

t3.add Time(t1, t2); 
t3.display Time();

return 0;

  }