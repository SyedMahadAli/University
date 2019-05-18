#include <iostream>
using namespace std;
 
void printArray(double[]);
void userInputArray(double array[]);
void calculate(double array[]);
 
 
int main()
{
 double marks[10];
 float sum=0.0; 
 
    userInputArray(marks);
 
    printArray(marks);
    calculate(marks);
    
    
 
}

void printArray(double array[])
{
	float sum;
    for(int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
    cout<<sum;
}
 
void userInputArray(double array[])
{
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter the marks: " << endl;
        cin >> array[i];
    }
}
void calculate(double array[])
{
	float sum=0.0;
	float average;
	for(int i=0;i<10;i++)
	{
		sum+=array[i];
	}
	average=sum/10;
	
}