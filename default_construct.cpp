//constructer----> special member function() it initilized an object of a class
// constructer----> does not have return type not even void.
//constructer----> automatically invoked the class
//constructer---->  only apply in public access
//constructer----> having three type
// 1) default 2)parameterized 3)copy
//constructer and class method is same

//default constructer

#include<iostream>
using namespace std;
class student{
	public:
		student()//default
		{
			cout<<"hello"<<endl;
		}
};
int main()
{
	student s1;
}
