#include <iostream> 
using namespace 
std; int number = 0;
class Test
{
int x; 
int y; 
public
:
Test() //Constructor
{
number++;
cout <<"\n number : "<<number;
cout<<"\nConstructor called for object "<<number;
}
~Test() //Destructor
{
cout<<"\nDestructor called for object "<<number<< 
number--; }
};
int main(){
Test v1,v2,v3; 
return 0;
}