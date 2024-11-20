//multilevel inheritence
#include<iostream>
using namespace std;
class grandfather{
	public:
		void display()
		{
			cout<<"grandfather"<<endl;
		}
	
};
class father: public grandfather{
	public:
		void display1()
		{
			cout<<"father"<<endl;
		}
};
class child: public father{
	public:
		void display2()
		{
			cout<<"child"<<endl;
		}
};
int main()
{
	child c1;
	c1.display();
	c1.display1();
	c1.display2();
}

