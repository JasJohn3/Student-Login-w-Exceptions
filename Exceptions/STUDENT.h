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
	string get_First_Name() const;
	char get_Middle_Initial() const;
	string get_Last_Name() const;
	int get_Age() const;

	~STUDENT();

private:
	string new_First_Name;
	string new_Last_Name;
	char new_Middle_Initial;
	int new_Age;


protected:


};


#endif // !STUDENT_H


