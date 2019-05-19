#include <iostream>
using namespace std;

class dist{
	private:
	struct data{
		int feet;
		float inches;
	};
	data length;
	data width;
	int total_f;
	float total_in;
	public:
	
	void input()
		{
		cout<<"Enter Length in Feet:  ";
		cin>>length.feet;
		cout<<"Enter Length in inches: ";
		cin>>length.inches;
		cout<<"Enter width in Feet:  ";
		cin>>width.feet;
		cout<<"Enter width in inches: ";
		cin>>width.inches;
	}
   	
	void cal()
	{
		total_f= length.feet * width.feet;
		total_in= length.inches * width.inches;
		if(total_in>=12)
		{
			total_f+= total_in/12;
			total_in=(int)total_in%12;
			
		}
	}
	void display()
	{
		cout<<endl;
		cout<<"Length of reectangle is "<<length.feet<<" Feet "<<length.inches<<" Inches "<<endl;
		cout<<"The area of Rectagnle is "<<total_f<<" Feet "<<total_in<<" Inches"<<endl;
	}
	
};
int main()
{
 dist o1;
 o1.input();
 o1.cal();
 o1.display();
 return 0;	
}