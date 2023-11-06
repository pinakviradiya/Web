//Write a C++ program to access static variable using scope resolution operator with using class.
#include <iostream>
class MyClass 
{
public:
	
    static int staticVariable;     
    static void printStaticVariable()
	 {
	    std::cout << "Static variable value: " << staticVariable << std::endl;
    }
};

int MyClass::staticVariable = 10; 

int main()
 {
 	
    MyClass::printStaticVariable(); 
    return 0;
}

