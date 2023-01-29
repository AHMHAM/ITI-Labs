/*
Make a student class with static constructor count and static schoolname
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

class student
{
	int id;
	char name[30];
	static int constructorcount;
	static char schoolname[50];

public:
	// Methods
	// Setters
	void setid(int d) { id = d; }
	void setname(char n[]) { strcpy(name, n); }
	static void setschoolname(char sn[]) { strcpy(schoolname, sn); }

	// Getters
	int getid() { return id; }
	char *getname() { return name; }
	static char *getschoolname() { return schoolname; }
	static int getconstructorcount() { return constructorcount; }

	// Constructors
	student()
	{
		id = 1;
		strcpy(name, "");
		constructorcount++;
	}
	student(int d, char *n)
	{
		id = 3;
		strcpy(name, "");
		constructorcount++;
	}
	// Destructor
	~student()
	{
		// cout << "\nConstructor count is " << getconstructorcount();
		cout << "\nDestructor is called\n";
		constructorcount--;
	}
};

// Static intialization
int student::constructorcount = 0;
char student::schoolname[50] = "ITI";

// Non member functions
student fillstu();
void printstu(student stud);

int main()
{
clrscr();
int i, size;
char sname[50];
student stu[3];

/*
// Dynamic allocation, use i<size in for loops.
cout << "Please Enter Number of Students: " << endl;
cin >> size;
student* stu;
stu = new student[size];
*/

cout << "Current school name: " << student::getschoolname()
	 << endl
	 << "Enter new name: ";
cin >> sname;
student::setschoolname(sname);
cout << "New school name: " << student::getschoolname() << endl;

for (i = 0; i < 3; i++)
{
	cout << "Student " << i + 1 << endl;
	stu[i] = fillstu();
}

for (i = 0; i < 3; i++)
{
	cout << "\n\nPrinting Student " << i + 1 << endl;
	printstu(stu[i]);
}

getch();
return 0;
}

student fillstu()
{
	student stud;
	int userid;
	char username[50];

	cout << "Enter ID:" << endl;
	cin >> userid;
	stud.setid(userid);
	cout << "Enter Name:" << endl;
	cin >> username;
	stud.setname(username);
	return stud;
}

void printstu(student stud)
{
	cout << "ID is " << stud.getid() << endl;
	cout << "Name is " << stud.getname() << endl;
}