#include<iostream.h>
int main()
{
	
	int n,num,rev=0,digit;
	cout<<"Eenter a number to check if it is a palinfrome:";
	cin>>num;
	n=num;
	while(num!=0)
	{
	   digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
		
	}
	if(n==rev)
	{cout<<"Given number is palindrome"<<endl;}
	else
	{cout<<"given number is not palindrome"<<endl;}
	return 0;
	
	
}