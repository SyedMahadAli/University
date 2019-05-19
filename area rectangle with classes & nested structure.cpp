#include<iostream>
using namespace std;
class measure{
	private:
		struct dist{
			int feet;
			double inches;
		};
		struct area{
			dist length;
			dist width;
		};
		int tfeet;
		float tinches;
		
		public:
			area d1;
			void input(){
				cout<<"Enter length in feet: ";
				cin>>d1.length.feet;
				cout<<"Enter length in inches: ";
				cin>>d1.length.inches;
				cout<<"Enter width in feet: ";
				cin>>d1.width.feet;
				cout<<"Enter width in inches: ";
				cin>>d1.width.inches;				
			}
			void area(){
				tfeet=d1.length.feet*d1.width.feet;
				tinches=d1.length.inches*d1.width.inches;
				
				if(tinches>=12)
				{
					tfeet+=tinches/12;
					tinches= (int)tinches%12;	
				}
			}
			void display(){
				cout<<"Length of rectangle: "<<d1.length.feet<<" feet "<<d1.length.inches<<" inches"<<endl;
				cout<<"width of rectangle: "<<d1.width.feet<<" feet "<<d1.width.inches<<" inches "<<endl;
				cout<<"Area of rectangle: "<<tfeet<<" feet "<<tinches<<" inches ";
			}
			
};
int main(){
	measure m1;
		m1.input();
		m1.area();
		m1.display();

}