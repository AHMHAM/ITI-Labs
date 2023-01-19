/*
 Fullname = Firstname + space + Lastname
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

int main()
{
clrscr();
char firstname[30];
char lastname[30];
char fullname[60];

cout << "Enter First name" << endl;
cin >> firstname;
cout << "Enter Last name" << endl;
cin >> lastname;

/*
strcpy overwrites value in char array
strcat concatenates 2 char arrays,
concatenate means combining both char arrays.
*/
strcpy(fullname, firstname);
strcat(fullname, " ");
strcat(fullname, lastname);

cout << endl
     << "Full name is: " << fullname;

getch();
return 0;
}