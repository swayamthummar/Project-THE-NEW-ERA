#include<iostream>
using namespace std;
class gupt
{
	private:
	char name[100];
};
main()
{
	gupt g1;
	cout<<"Enter your name->";
	cin>>g1.name;
	
	cout<<"Name ->"<<g1.name;
}
