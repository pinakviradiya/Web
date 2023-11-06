//Write a C++ program to access global variable using scope resolution 
operator without using class.
#include<iostream>
using namespace std;

int x; 

int main()
{
int x = 10; 
cout<<"Viradiya pinak\n";
cout<<"220130318014\n"<<endl;
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x;
return 0;
}

