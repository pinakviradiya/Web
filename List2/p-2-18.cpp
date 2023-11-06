#include<iostream>
#define PI 3.14
using namespace std;
class area
{
	private:
		float r;
	public:
		void Circle(float r)
		{
			cout<<"Viradiya pinak"<<endl;
	        cout<<"220130318014"<<endl;
			cout<<"------------------"<<endl;
			cout<<"The Radius Of Circle is::"<<PI*r*r;
			
		}
		
};
int main()
{
	area a;
	a.Circle(6);
	
	return 0;
}
