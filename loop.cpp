// loop in oops (with class and object) c++ programming
#include<iostream>
using namespace std;
class A{
	public:
		void set()
		{
			int i;
			for(i=1;i<=5;i++)
			{
				cout<<"hello welcome to c++ programming"<<endl;
			}
		}
		void get()
		{
			int i;
			cout<<"enter your value"<<endl;
			cin>>i;
			while(i<5)
			{
				cout<<"valid value"<<endl;
				i++;
			}
			
		}
		void put()
		{
			int i;
			cout<<"enter your value"<<endl;
			cin>>i;
			do{
			    cout<<"valid value"<<endl;
				i++;	
			}
			while(i<=5);
			
		}
};
int main()
{
	A a1;
	a1.set();
	a1.get();
	a1.put();
	
}
