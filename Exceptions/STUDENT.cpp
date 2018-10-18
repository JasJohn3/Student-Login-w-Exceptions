//Function Definitions
#include "STUDENT.h"

STUDENT::STUDENT(string first_name, char middle_initial, string last_name ,int age )
{
	new_First_Name = first_name;
	new_MI = middle_initial;
	new_Last_Name = last_name;
	new_Age = age;
}
STUDENT::STUDENT()
{
	new_Age = 0;
}
string STUDENT::get_First_Name() const 
{ 
	return new_First_Name; 
}
char STUDENT::get_Middle_Initial() const 
{
	return new_MI;
}
string STUDENT::get_Last_Name() const 
{
	return new_Last_Name;
}
int STUDENT::get_Age() const 
{
	return new_Age;
}

STUDENT::~STUDENT()
{

}