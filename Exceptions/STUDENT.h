//Function Declarations
#pragma once

#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class STUDENT
{
public:
	STUDENT();
	STUDENT(string first_name, char middle_initial, string last_name, int age);
	string get_First_Name() ;
	char get_Middle_Initial() ;
	string get_Last_Name() ;
	int get_Age();
	void set_First_Name(string new_First_Name);
	void set_Middle_Initial(char new_Middle_Initial);
	void set_Last_Name(string new_Last_Name);
	void set_Age(int new_Age);


	~STUDENT();

private:
	string firstName;
	string lastName;
	char middleInitial;
	int age;


protected:


};


#endif // !STUDENT_H


