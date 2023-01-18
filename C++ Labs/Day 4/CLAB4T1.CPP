/* A program to calculate addition, subtraction,
multiplication or division of two numbers
using functions */
#include <iostream.h>
#include <conio.h>

// Function Declarations
float cin_addition(); // Get 2 values from user then return sum
float cin_subtraction();
float cin_multiplication();
float cin_division();

// Clears Screen then writes add, sub, exit on screen
void draw_menu(int xaxis, int start);

int main()
{
char ch;
float result = 0;

int xaxis = 10, yaxis = 5, start, flag = 0;
start = yaxis; // Value of yaxis can change, start stays the same.

draw_menu(xaxis, start); // Function Call
gotoxy(xaxis, start);	 // Puts cursor next to Add

do
{
	ch = getch();
	if (ch == 0) // Extended Key
	{
		ch = getch();

		if (ch == 72 && yaxis != start) // Up arrow
		{
			yaxis--;
		}
		else if (ch == 80 && yaxis != start + 4) // Down arrow
		{
			yaxis++;
		}
		else if (ch == 71) // Home
		{
			yaxis = start;
		}
		else if (ch == 79) // End
		{
			yaxis = start + 4;
		}
		gotoxy(xaxis, yaxis); // Go to new location after y changes
	}
	else if (ch == 27) // Esc
	{
		flag = 1; // Makes do-while loop condition false.
	}
	else if (ch == 13) // Enter
	{
		/*
		Draw menu is used to clear screen to get rid of
		old data when calculating new numbers from users.

		You can comment draw_menu to see the difference
		when pressing enter multiple times.
		*/
		draw_menu(xaxis, start);
		// Then go to a random location that doesn't overwrite draw.
		gotoxy(xaxis, start + 7);

		if (yaxis == start)
		{
			result = cin_addition();
		}
		else if (yaxis == start + 1)
		{
			result = cin_subtraction();
		}
		else if (yaxis == start + 2)
		{
			result = cin_multiplication();
		}
		else if (yaxis == start + 3)
		{
			result = cin_division();
		}
		else if (yaxis == start + 4) // Exit
		{
			flag = 1; // Makes do-while loop condition false.
		}
		cout << "Result = " << result;

		// Returns to previous location because yaxis doesn't change
		// when pressing enter.
		gotoxy(xaxis, yaxis);
	}
} while (flag == 0); // Stays true if user doesn't press Esc or Enter on Exit

return 0;
}

// Function Definitions
// Recieve 2 numbers from user then add them and return sum.
float cin_addition()
{
	float a, b;
	cout << "Enter Two Numbers for Addition:" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	return a + b;
	// float sum; sum=a+b; return sum; is also valid.
}

float cin_subtraction()
{
	float a, b;
	cout << "Enter Two Numbers for Subtraction:" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	return a - b;
}

float cin_multiplication()
{
	float a, b;
	cout << "Enter Two Numbers for Multiplication:" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	return a * b;
}

float cin_division()
{
	float a, b;
	cout << "Enter Two Numbers for Division:" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	return a / b;
}

// Clears Screen then writes add, sub, exit on screen
void draw_menu(int xaxis, int start)
{
	clrscr();
	gotoxy(xaxis, start);
	cout << "1. Add";

	gotoxy(xaxis, start + 1);
	cout << "2. Substract";

	gotoxy(xaxis, start + 2);
	cout << "3. Multiply";

	gotoxy(xaxis, start + 3);
	cout << "4. Divide";

	gotoxy(xaxis, start + 4);
	cout << "5. Exit";
}