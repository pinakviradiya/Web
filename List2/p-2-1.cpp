//What is static and non-static variable
#include<iostream>
using namespace std;
void fun()
{
	int a;	//non-static variable
	static int b;//static variable
	cout<<"Viradiya pinak"<<endl;
	cout<<"220130318014"<<endl;
	cout<<"Value of a is (no-static) :: "<<a++<<endl;
	cout<<"Value of b is (static)    :: "<<b++<<endl;
}
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		fun();
	}
	
	return 0;
}
