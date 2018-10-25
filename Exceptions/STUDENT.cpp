//Function Definitions
#include "STUDENT.h"

STUDENT::STUDENT(string newfirstname, char newmiddleinitial, string newlastname ,int newage )
{
	firstName = newfirstname;
	middleInitial = newmiddleinitial;
	lastName = newlastname;
	age = newage;
}
STUDENT::STUDENT()
{
	age = 0;
}
string STUDENT::get_First_Name()  
{ 
	return firstName; 
}
char STUDENT::get_Middle_Initial()  
{
	return middleInitial;
}
string STUDENT::get_Last_Name()  
{
	return lastName;
}
int STUDENT::get_Age()  
{
	return age;
}

void STUDENT::set_First_Name(string new_First_Name)
{
	firstName = new_First_Name;
}
void STUDENT::set_Middle_Initial(char new_Middle_Initial)
{
	middleInitial = new_Middle_Initial;
}
void STUDENT::set_Last_Name(string new_Last_Name)
{
	lastName = new_Last_Name;
}
void STUDENT::set_Age(int new_Age)
{
	age = new_Age;
}









STUDENT::~STUDENT()
{

}