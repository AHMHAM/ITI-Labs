/*
Create a struct with student id, name and grades.
fillstu(), printstu()
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

struct student
{
	int id;
	char name[30];
	int grade[3];
}; // Don't forget semicolon at the end of Struct and Class.

student fillstu();
void printstu(student stud);

int main()
{
clrscr();
int i, size;
// student stu[3];

// Dynamic allocation
cout << "Please Enter Number of Students: " << endl;
cin >> size;
student *stu;
stu = new student[size];

/*
Fills data of 1 student each time it is called,
has more headers than a function that fills all students data at once
but it is extremely flexible. You can add or print
any number of students you need.
*/
for (i = 0; i < size; i++)
{
	cout << "Student " << i + 1 << endl;
	stu[i] = fillstu();
}

for (i = 0; i < size; i++)
{
	// endl is the same as "\n"
	cout << "\n\nPrinting Student " << i + 1 << endl;
	printstu(stu[i]);
}

getch();
return 0;
}

student fillstu()
{
	student stud;
	cout << "Enter ID:" << endl;
	cin >> stud.id;
	cout << "Enter Name:" << endl;
	cin >> stud.name;
	cout << "Enter All Grades:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Grade " << i + 1 << endl;
		cin >> stud.grade[i];
	}
	cout << endl;
	return stud;
}

void printstu(student stud)
{
	cout << "ID is " << stud.id << endl;
	cout << "Name is " << stud.name << endl;
	cout << "Grades are  ";
	for (int i = 0; i < 3; i++)
	{
		cout << stud.grade[i] << "\t"; // "\t" is the same as tab key
	}
}
