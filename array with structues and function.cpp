#include<iostream>
using namespace std;

struct Distance
	{
	int feet;
	float inches;
	
};
struct Room
	{ 
	Distance length;
	 Distance width;
	
};

void input(struct Room[3],double[3], double[3]);
void area_of_room(double [3],double [3], double [3]);
void display(double [3]);

double sum1[3], sum2[3];
 double area[3];
 Room r[3];

int main()
{ 
 
 input(r,sum1,sum2);
 cout<<endl;
 area_of_room(sum1,sum2,area);
 cout<<endl;
 display(area);

 }
 
	


void input(struct Room r[3], double sum1[3], double sum2[3])
{
	for(int i=0;i<3;i++)
 	{
 	
cout<<"Enter Length in feet of room "<<i+1<<": ";
cin>>r[i].length.feet;
cout<<"Enter Length in inches for room "<<i+1<<": ";
cin>>r[i].length.inches;
cout<<"Enter width in feet of room "<<i+1<<": ";
cin>>r[i].width.feet;
cout<<"Enter width in inches for room "<<i+1<<": ";
cin>>r[i].width.inches;
///////////////////////////
cout<<r[i].length.feet<<endl<<r[i].length.inches<<endl;

cout<<r[i].width.feet<<endl<<r[i].width.inches<<endl;




}
}



void area_of_room(double sum1[3],double sum2[3], double aera[3])
{
	for(int i=0; i<3;i++)
	{
		sum1[i]=r[i].length.feet+(r[i].length.inches)/12;
        sum2[i]=r[i].width.feet+(r[i].width.inches)/12;
		
	area[i]=sum1[i]*sum2[i];
	}
}

void display(double area[3])
{
	cout<<endl;
	for(int i=0; i<3;i++)
	{
cout<<"Area of Room "<<(i+1)<<" is : "<<area[i];
cout<<endl<<endl;
	}
}