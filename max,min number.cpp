// write a program 
// that enter postive integer as a input 
// use the while loop  find the max and min number and their average
#include<iostream.h>
using namespace std;
main()
{
	int n,sum=0,max=0,min=0,average,count=0;
	
	cout<<"Enter posiive integar number:";
	      cin>>n;
	max=n;
	min=n;
	while(n>=0)
	{
		
	    sum=sum+n;
		count=count+1;  
	if(n>max)
	{
		max=n;
	}
	if(n<min)
	{
		min=n;
	}
	cout<<"Enter posiive integar number:";
	      cin>>n;
	}
	if(count>=1)
	{
		average=sum/count;
		cout<<"Average is"<<average<<endl;
		cout<<"maximum number is"<<max<<endl;
		cout<<"minimum number is"<<min<<endl;
	}
	else

	cout<<"you entered wrong number";	
	
	return 0;
}
