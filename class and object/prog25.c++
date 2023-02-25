
#include<iostream>
using namespace std;
class student{
	int reg_no;
	string name, uni;
	public:
		void get(string s, string t, int r)
		{
			name = s;
			uni = t;
			reg_no = r;
		}
		void disp(){
			cout<<"Student Name: "<<name<<endl;
			cout<<"University: "<<uni<<endl;
			cout<<"Registration number: "<<reg_no<<endl;
		}
};
class arts:public student{
	public:
		void get()
		{
			
		}
		void disp()
		{
			student::disp();
			cout<<"College:l.c.s college darbhanga"<<endl;
			cout<<"Stream: Arts"<<endl;
			cout<<"Subjects: History, Geography, Economics"<<endl;
			cout<<"Course duration: 3 years"<<endl;
		}
};
class engineering:public student{
		public:
		void get()
		{
		
		}
		void disp()
		{
			student::disp();
			cout<<"College: Katihar Engineering College, Katihar"<<endl;
			cout<<"Stream: Engineering"<<endl;
			cout<<"Course duration: 4 years"<<endl;
		}
};
class medical:public student{
		public:
		void get()
		{
			
		}
		void disp()
		{
			student::disp();
			cout<<"College: Katihar Medical College, Katihar"<<endl;
			cout<<"Stream: Medical"<<endl;
		}
};
class cse:public engineering{
	public:
		
		void get()
		{
			engineering::get();
		}
		void disp()
		{
			engineering::disp();
			cout<<"Branch: Computer Science and Engineering"<<endl;
			cout<<"Total semesters: 8"<<endl;
		}
};
class eee:public engineering{
	public:
		
		void get()
		{
			engineering::get();
		}
		void disp()
		{
			engineering::disp();
			cout<<"Branch: Electrical and Electronics Engineering"<<endl;
			cout<<"Total semesters: 8"<<endl;
		}
};
class civil:public engineering{
	public:
		
		void get()
		{
			engineering::get();
		}
		void disp()
		{
			engineering::disp();
			cout<<"Branch: Civil Engineering"<<endl;
			cout<<"Total semesters: 8"<<endl;
		}
};
class mbbs:public medical{
	public:
		
		void get()
		{
			medical::get();
		}
		void disp()
		{
			medical::disp();
			cout<<"Course name: MBBS"<<endl;
			cout<<"Course duration: 5 years"<<endl;
		}
};
class pg: public mbbs
{
	public:
		
		void get()
		{
			mbbs::get();
		}
		void disp()
		{
			mbbs::disp();
			cout<<"Course pursuing: PG"<<endl;
			cout<<"Course duration: 3 years"<<endl;
		}
};
int main(){
	while (1){
		int ch;
		cout<<"Press 1 for arts, 2 for engineering and 3 for medical courses"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				arts a;
				a.student::get("Anjali", "Aryabhatta Knowledge University", 21105129013);
				a.get();
				a.disp();
				break;
				}
			case 2:{
				int choice;
				cout<<"Press 1 for CSE, 2 for EE and 3 for Civil Engineering"<<endl;
				cin>>choice;
				switch(choice){
					case 1:{
						cse C;
						C.student::get("Anjali", "Aryabhatta Knowledge University",21507);
						C.get();
						C.disp();
						break;
					}
					case 2:{
						eee e;
						e.student::get("Anjali", "Aryabhatta Knowledge University", 21507);
						e.get();
						e.disp();
						break;
					}
					case 3:{
						civil c;
						c.student::get("Anjali", "Aryabhatta Knowledge University", 21507);
						c.get();
						c.disp();
						break;
					}					
				}
				break;
			}
			case 3:{
				pg p;
				p.student::get("Anjali", "Aryabhatta Knowledge University", 21507);
				p.get();
				p.disp();
				break;
			}
		}
	}
	return 0;
}	

