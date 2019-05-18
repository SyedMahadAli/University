#include <iostream>
using namespace std;
 
void printArray(double[], int);
void userInputArray(double array[], int size);
 
 
int main()
{
 
    double rainfall[5];
 
 
    userInputArray(rainfall, 5);
 
    printArray(rainfall, 5);
 
}
// The first formal parameter could also be
// written as double* array since a pointer
// to the first element is what is really
// passed to the array. (Ditto for function
// below)
void printArray(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
 
void userInputArray(double array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a rainfall amount: " << endl;
        cin >> array[i];
    }
}