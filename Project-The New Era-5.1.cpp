#include<iostream>
using namespace std;
class samajik
{
	public:
	char name[100];
};
main()
{
	samajik s1;
	cout<<"Enter your name->";
	cin>>s1.name;
	
	cout<<"Name ->"<<s1.name;
}
