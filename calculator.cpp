#include<iostream.h>
int main()
{
	int num1,num2,x, total;
	cout<<"Enter 1st number:";
	cin>>num1;
	cout<<"Enter 2nd number:";
	cin>>num2;
	cout<<endl;
	cout<<"\tPress 1 for Addition"<<endl;
	cout<<"\tPress 2 for Subtraction"<<endl;
	cout<<"\tPress 3 for Multiplication"<<endl;
	cout<<"\tPress 4 for Division"<<endl;
	cout<<"\tPress 5 for Remainder"<<endl<<endl;
	
	cout<<"Enter your choice:";
	Choice:
	cin>>x;
	
	if(x==1)
	{
		total=num1+num2;
	}
	else if(x==2)
	{
		total=num1-num2;
	}
	else if(x==3)
	{
		total=num1*num2;
	}
	else if(x==4)
	{
		total=num1/num2;
	}
	else if(x==5)
	{
		total=num1%num2;
	}
	else
	{
	cout<<"Invaild choice, Please Enter your choice again:";
	goto Choice;
	}
	cout<<total<<endl;
	
	return 0;
}