/* Find Maximum using Loops */
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int num, enteredvalue, max, i;

cout << "Enter how many numbers are needed:" << endl;
cin >> num; // How many numbers the user wants

/*
Spaces before lines:
 1) In most programming languages white spaces are cosmetic.
  2) Only Python language uses whitespaces for syntax.
   3) White spaces are done by the Space key or Tab key,
    4) White spaces are the empty spaces before code.
     5) White spaces help make the code more readable,
      6) Newer IDEs add white spaces automatically.
*/
for (i = 0; i < num; i++)
{
	cin >> enteredvalue;
	if (i == 0)
	{
		max = enteredvalue; // Assign max to first number
	}
	if (enteredvalue > max)
	{
		max = enteredvalue;
	}
}

cout << "Max is: " << max << endl;

getch();
return 0;
}