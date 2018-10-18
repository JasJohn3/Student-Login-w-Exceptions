//Sample program for Student Login Command Line Program

#include <iostream>
#include<string>
#include "STUDENT.h"

using namespace std;


int main() {
	string first_Name;
	string last_Name;
	char middle_Initial;
	int age;

	cout << "Enter your first name: " << flush;
	cin >> first_Name;
	cout << "\nEnter your Middle Initial: " << flush;
	cin >> middle_Initial;
	cout << "\nEnter your last name: " << flush;
	cin >> last_Name;
	cout << "\nEnter your age: " << flush;
	cin >> age;
	
	STUDENT Student_test(first_Name,middle_Initial,last_Name,age);

	cout << "\nStudent First Name: " << Student_test.get_First_Name() << endl;
	cout << "Student Middle Initial: " << Student_test.get_Middle_Initial() << endl;
	cout << "Student Last Name: " << Student_test.get_Last_Name() << endl;
	cout << "Student Age: " << Student_test.get_Age() << endl;

	system("pause");

}
