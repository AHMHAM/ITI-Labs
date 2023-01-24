/*
 Class Student that has id, name (pointer)
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

class student
{
	int id;
	char *name;

public:
	// Methods
	// Setters
	void setid(int d) { id = d; }
	void setname(char *n); // Method Declaration

	// Getters
	int getid() { return id; }
	char *getname(); // Method Declaration

	// Constructors
	student()
	{
		id = 1;
		name = new char[7]; // Array of pointers?
		strcpy(name, "NoName");
	}
	student(int d) { id = 2; }
	student(int d, char *n)
	{
		id = d;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	// Destructor
	~student()
	{
		delete (name);
		cout << "destructor is called" << endl;
	}
};

int main()
{
	clrscr();
	student s1, s2(5), s3(80, "Ziad");

	cout << "Printing values before changes\n";
	cout << "Default " << s1.getid() << " " << s1.getname() << endl;
	cout << "ID only " << s2.getid() << " " << s2.getname() << endl;
	cout << "ID & Name " << s3.getid() << " " << s3.getname() << endl;

	// Changing values
	s1.setid(123);
	s1.setname("Yehia");
	s2.setid(456);
	s2.setname("Mahmoud");
	s3.setid(789);
	s3.setname("Khaled");

	cout << "\n\nPrinting values after changes\n";
	cout << "Default " << s1.getid() << " " << s1.getname() << endl;
	cout << "ID only " << s2.getid() << " " << s2.getname() << endl;
	cout << "ID & Name " << s3.getid() << " " << s3.getname() << endl;

	getch();
	return 0;
}

// Method definition outside the class
// Name
void student::setname(char n[])
{
	delete (name);
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

char *student::getname()
{
	return name;
}
