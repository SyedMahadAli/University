#include <iostream>
using namespace std;
class dist{
	private:
	int feet;
	float inches;
	public:
	dist():feet(0),inches(0.0)
	{
		
	}
	void get_data()
	{
		cout<<"Enter Feet: ";
		cin>>feet;
		cout<<"Enter Inches: ";
		cin>>inches;
	}
	void calculation(dist , dist);
	void area(dist l , dist w)
	{
		cout<<endl;
		cout<<"The area of rectangle is: ";
		feet= l.feet * w.feet;
		inches= l.inches * w.inches;
		if(inches>=12)
		{
			feet+=inches/12;
			inches=(int)inches/12;	
		}
		cout<<feet<< "  "<<inches;
	}
 void display()
 {
 	cout<<endl<<"The area is : ";
 	cout<<feet<<"   "<<inches;
 }
};
void dist::calculation(dist a1 , dist a2)
{
	feet= a1.feet+a2.feet;
	inches= a1.inches+a2.inches;
	if(inches>=12)
	{
		feet+=inches/12;
		inches=(int)inches/12;
	}
}
int main()
{
	dist o1,o2,o3,o4;
	o1.get_data();
	o2.get_data();
	o3.calculation(o1,o2);
	
	o4.area(o1,o2);
	return 0;
}