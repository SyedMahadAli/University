#include <iostream>
using namespace std;
const int Districts = 3, Months = 4;

void manage(long[Districts][Months], long[3], double[3]);
void print(char[30], long[3], double[3]);

int main() {
	
	long sale[Districts][Months];
	long sum[3]={0,0,0};
	double avg[3];
	char name[30];
	

	cout << "Enter Company's Name: ";
	cin >> name;
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Sale for District " << (i + 1) << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << "Month: " << (j + 1) << ":\t";
			cin >> sale[i][j];
		}
	}

	manage(sale, sum, avg);
	print(name, sum, avg);

	
}

void manage(long mainArr[Districts][Months], long sumArr[3], double avgArr[3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
		{
			sumArr[i] += mainArr[i][j];
		}
		avgArr[i] = sumArr[i] / Months;
	}

}
void print(char name[30], long sumArr[3], double avgArr[3]) {
	cout <<endl<< "Company's Name: " << name << endl;
	for (int i = 0; i < Districts; i++) {
		cout << endl << endl << "District: " << (i + 1) << endl;
		cout << "Sum =  " << sumArr[i] << endl;
		cout << "Avg =  " << avgArr[i];
	}
	cout << endl << endl << endl;
}