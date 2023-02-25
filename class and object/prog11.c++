#include<iostream> 
using namespace std;
inline float mul( float a, float b)
{
return(a*b);
}
int main()
{

  
float a,b;
cout<<"\nEnter the value of a:"; cin>>a;
cout<<"\nEnter the value of b:"; cin>>b;
cout<<"\nMultiplication of two numbers : 12"<<mul(a,b)<<"\n"; return 0;
}