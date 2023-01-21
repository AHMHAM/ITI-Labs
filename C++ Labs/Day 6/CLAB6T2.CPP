/*
 Only print printable characters,
 use home, end, left, right, insert, delete, backspace (with bonus)
*/
#include <iostream.h>
#include <conio.h>
#include <string.h> //For strlen()
#include <ctype.h>	//For isprint()

// Trying the syntax for define. Start with #, has no equal sign & no semicolon
#define yaxis 1

int main()
	//{
	clrscr();
// Intialize whole array as 0 or '\0' to end string functions without printing garbage
char userstr[11] = {0};
char ch;
int flag = 0, insertflag = 0, xaxis = 1, i;

do
{
	ch = getch();
	// If letter, number or other printable character
	// Printable characters have Ascii between 32 and 127
	if (isprint(ch) && xaxis < 10)
	{
		// Check if strlen() < 10
		if (insertflag == 1 && strlen(userstr) < 10)
		{
			clrscr();
			for (i = strlen(userstr); i > xaxis - 2; i--)
			{
				userstr[i + 1] = userstr[i]; // Shift to the right
			}
			// Enter new character to the left of current character
			userstr[xaxis - 1] = ch;
			cout << userstr;
		}
		else
		{
			// Arrays start at 0, console window starts at (1,1)
			// To access 1st element we need xaxis-1
			userstr[xaxis - 1] = ch;
			cout << ch;
			xaxis++;
		}
		insertflag = 0;
		gotoxy(xaxis, yaxis);
	}
	else if (ch == 13) // Enter
	{
		flag = 1;
		gotoxy(1, yaxis + 3);
		cout << userstr; // Print final result
	}
	else if (ch == 8 && xaxis > 1) // Backspace
	{
		clrscr();
		/*
		Removes the character before the cursor:
		Shift array to the left
		The character before the cursor is removed / replaced
		Last written array character is replaced with NULL because
		we intialized the whole array as NULL before entering data
		*/
		for (i = xaxis - 2; i < strlen(userstr); i++)
		{
			userstr[i] = userstr[i + 1];
		}
		cout << userstr;
		xaxis--;
		gotoxy(xaxis, yaxis);
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
		else if (ch == 83) // Delete
		{
			clrscr();
			/*
			Removes the character cursor is on:
			Shift array to the left
			The current array character is removed / replaced
			Last written array character is replaced with NULL because
			we intialized the whole array as NULL before entering data
			*/
			for (i = xaxis - 1; i < strlen(userstr); i++)
			{
				userstr[i] = userstr[i + 1];
			}
			cout << userstr;
		}
		else if (ch == 82) // Insert
		{
			insertflag = 1; // Will be used when entering printable characters
		}
		gotoxy(xaxis, yaxis);
	}
} while (flag == 0);

getch();
return 0;
}