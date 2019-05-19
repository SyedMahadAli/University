#include <iostream>
using namespace std;
class dist{
	private:
	int lf, wf ;
	float li, wi, area;
	
	public:
	dist():lf(0),li(0.0),wf(0),wi(0.0)
	{
		
	}
	void get_data()
	{
		cout<<"Enter Feet For Lenght : ";
		cin>>lf;
		cout<<"Enter Inches For Lenght : ";
		cin>>li;
		cout<<"Enter Feet For width : ";
		cin>>wf;
		cout<<"Enter Inches For width : ";
		cin>>wi;
	}
	double cal()
	{
		area= (lf + li/12) * (wf + wi/12);
	}
	void display()
	{
		
		cout<<"the area of rectangle is: "<<area<<endl;
		
	}

	

};

int main()
{
	dist o1;
	o1.get_data();
	o1.cal();
	o1.display();

	return 0;
}