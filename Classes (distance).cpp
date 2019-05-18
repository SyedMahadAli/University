#include <iostream>
using namespace std;

// Writing program to input distance in feet & inches

class dis
{
	private:
	int feet;
	float inches;
	public:
	void get(int f, float i)
	{
		feet = f;
		inches = i;
	}
	void show()
	{
		cout<<"Feet are: "<<feet<<endl;
		cout<<"inches are: "<<inches<<endl;
		
	}
};
int main()
{
	dis o1 , o2;
	o1.get(2,2.4);  // taking inputs
	o2.get(4,3.2);
	/////////////////////////////////
	o1.show();
	o2.show();
	return 0;
}
