/* Draw a menu. Exit program when Esc is pressed
or when Enter is pressed on 'Exit' */
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int xaxis = 10, yaxis = 5, start;
char ch;

/*
When your while or do-while loop has multiple exits you can
use a flag as the condition. When one of the exit conditions
is fulfilled change the value of the flag. The loop will
terminate the next time the loop condition is checked.
*/
int flag = 0;

/*
Value of yaxis changes, start remains the same and
it can be used to check if aryaxis keys are within boundaries
or used if the menu needs to be drawn multiple times.
*/
start = yaxis;

gotoxy(xaxis, start);
cout << "1. File" << endl;

gotoxy(xaxis, start + 1);
cout << "2. Edit" << endl;

gotoxy(xaxis, start + 2);
cout << "3. Display" << endl;

gotoxy(xaxis, start + 3);
cout << "4. Exit";
gotoxy(xaxis, start); // Cursor starts on File

do
{
	ch = getch();
	if (ch == 0) // Extended Key
	{			 // Can also be made using Switch
		ch = getch();
		if (ch == 72 && yaxis != start) // Up
		{
			// Value of variable changes with assignment operator =
			// and with increment ++ / decrement operators --
			yaxis--;
		}
		else if (ch == 80 && yaxis != start + 3) // Down
		{
			yaxis++;
		}
		else if (ch == 71) // Home
		{
			yaxis = start;
		}
		else if (ch == 79) // End
		{
			yaxis = start + 3;
		}
		gotoxy(xaxis, yaxis); // After yaxis changes
	}
	else if (ch == 27) // Esc
	{
		flag = 1; // Flag Usage, when pressing Esc
	}
	else if (ch == 13) // Enter
	{
		if (yaxis == start) // File
		{
			/*
			Go a bit to the right, use cout then
			return to where you started.
			Value of xaxisumn in memory doesn't change because
			we aren't using =, ++, --
			*/
			gotoxy(xaxis + 20, yaxis);
			cout << "File selected";
			gotoxy(xaxis, yaxis);
		}
		else if (yaxis == start + 1) // Edit
		{
			gotoxy(xaxis + 20, yaxis);
			cout << "Edit selected";
			gotoxy(xaxis, yaxis);
		}
		else if (yaxis == start + 2) // Display
		{
			gotoxy(xaxis + 20, yaxis);
			cout << "Display selected";
			gotoxy(xaxis, yaxis);
		}
		else if (yaxis == start + 3) // Exit
		{
			flag = 1; // Flag usage, when pressing enter while on last line
		}
	}
} while (flag == 0); // Flag stays 0 as long as Esc and Enter aren't pressed

return 0;
}