#include <iostream>
using namespace std;
class Endsem;
class Midsem
{
 int aec, oops, dsa;
 int total1;
public:
 void getmarks()
 {
 cout << "Enter marks of Mid sem in AEC OOPs and DSA \n";
 cin >> aec >> oops >> dsa;
 
 total1= aec+oops+dsa;
 }
 friend void totalmarks(Midsem, Endsem);
};
class Endsem
{
 int aec, oops, dsa;

 int total2;
public:
 void getmarks()
 {
 cout << "Enter marks of End sem in AEC OOPs and DSA \n";
 cin >> aec >> oops >> dsa;
 total2= aec+oops+dsa;
 }
 friend void totalmarks(Midsem, Endsem );
};
void totalmarks(Midsem m,Endsem e){
 int total = m.total1 + e.total2;
 cout<<"\nTotal Marks : "<<total;
 cout<<"\nPercentage : "<<float(total/6)<<"%";
}
int main(){
 Midsem a;
 Endsem b;
 a.getmarks();
 b.getmarks();
 totalmarks(a,b);
 return 0;
}
