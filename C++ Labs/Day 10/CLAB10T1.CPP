/*
 Person is base class.
 Employee and Customer inherit from Person.
*/

#include <iostream.h>
#include <conio.h>
#include <string.h>

class person
{
	int id;
	char name[30];

public:
	// Methods
	// Setters
	void setid(int id)
	{
		this->id = id;
	}
	void setname(char name[])
	{
		strcpy(this->name, name);
	}
	// Getters
	int getid()
	{
		return id;
	}
	char *getname()
	{
		return name;
	}
	// Constructors
	person()
	{
		id = 0;
		strcpy(name, " NoName ");
	}

	person(int id, char name[])
	{
		this->id = id;
		strcpy(this->name, name);
	}
};

class employee : public person
{
	int salary;

public:
	// Setter and Getter
	void setsalary(int salary) { this->salary = salary; }
	int getsalary() { return salary; };
	// Constructors
	employee()
	{
		salary = 0;
	}
	employee(int id, char name[], int salary) : person(id, name)
	{
		this->salary = salary;
	}
};

class customer : public person
{
	int phone;

public:
	// Setter and Getter
	void setphone(int phone) { this->phone = phone; }
	int getphone() { return phone; };
	// Constructors
	customer()
	{
		phone = 0;
	}
	customer(int id, char name[], int phone) : person(id, name)
	{
		this->phone = phone;
	}
};

int main()
{
clrscr();
person p1, p2(1, "Khaled");
employee e1, e2(2, "Mahmoud", 3000);
customer c1, c2(3, "Yehia", 5021);

cout << "Printing values before changes\n";
cout << "Default P " << p1.getid() << " " << p1.getname() << endl;
cout << "Default E " << e1.getid() << " " << e1.getname() << " " << e1.getsalary() << endl;
cout << "Default C " << c1.getid() << " " << c1.getname() << " " << c1.getphone() << endl;

cout << "Parameterized P " << p2.getid() << " "
     << p2.getname() << endl;
cout << "Parameterized E " << e2.getid() << " "
     << e2.getname() << " " << e2.getsalary() << endl;
cout << "Parameterized C " << c2.getid() << " "
     << c2.getname() << " " << c2.getphone() << endl;

// Changing values
e1.setid(555);
e1.setname("Sarah");
e1.setsalary(2022);

p2.setid(100);
p2.setname("Ibrahim");

e2.setid(200);
e2.setname("Ali");
e2.setsalary(6000);

c2.setid(300);
c2.setname("Hatem");
// In phone leading zeros are removed (00358 would save 358) because it is int.
// If you want to keep the zeroes then change type to array
c2.setphone(900);

cout << "\nPrinting values after changes\n";
cout << "Default E " << e1.getid() << " " << e1.getname() << " " << e1.getsalary() << endl;

cout << "Parameterized P " << p2.getid() << " "
     << p2.getname() << endl;
cout << "Parameterized E " << e2.getid() << " "
     << e2.getname() << " " << e2.getsalary() << endl;
cout << "Parameterized C " << c2.getid() << " "
     << c2.getname() << " " << c2.getphone() << endl
	 << endl;

getch();
return 0;
}