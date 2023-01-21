/*
 Only print printable characters,
 use home, end, left, right buttons.
*/
#include <iostream.h>
#include <conio.h>
#include <string.h> //For strlen()
#include <ctype.h>	//For isprint()

// Trying the syntax for define. Start with #, has no equal sign & no semicolon
#define yaxis 2

int main()
	//{
	clrscr();
// Intialize whole array as 0 or '\0' to end string functions without printing garbage
char userstr[11] = {0}; // Intialize whole array as 0. 0 or '\0' ends string
char ch;
int flag = 0, xaxis = 1;

cout << "Enter a maximum of 10 characters" << endl;

do
{
	ch = getch();
	// If letter, number or other printable character
	// Printable characters have Ascii between 32 and 127
	if (isprint(ch) && xaxis < 10)
	{
		// Arrays start at 0, console window starts at (1,1)
		// To access 1st element we need xaxis-1
		userstr[xaxis - 1] = ch;
		cout << ch;
		xaxis++;
	}
	else if (ch == 13) // Enter
	{
		flag = 1;
		gotoxy(1, yaxis + 2);
		cout << userstr; // Print final result
	}
	else if (ch == 27) // Escape
	{
		flag = 1;
	}
	else if (ch == 0) // Extended key
	{
		ch = getch();
		if (ch == 75 && xaxis > 1) // Left
		{
			xaxis--;
		}
		else if (ch == 77 && xaxis < strlen(userstr)) // Right
		{
			xaxis++;
		}
		else if (ch == 71) // Home
		{
			xaxis = 1;
		}
		else if (ch == 79) // End
		{
			xaxis = strlen(userstr);
		}
		gotoxy(xaxis, yaxis);
	}
} while (flag == 0);

getch();
return 0;
}