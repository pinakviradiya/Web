// CPP Program to demonstrate Default Arguments
#include<iostream>
using namespace std;
int sum(int A,int B,int C=0,int D=0) 
{
	return(A+B+C+D);
}
int main()
{
	cout<<"Viradiya pinak"<<endl;
	cout<<"220130318014"<<endl;
	cout<<"---------------------"<<endl; 
	cout<<sum(20,25) <<endl;
	cout<<sum(20,25,75)<<endl;
	cout<<sum(20,25,75,100)<<endl;
	return 0;
}
