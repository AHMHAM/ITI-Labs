/* User enters 5 numbers, find maximum and minimum
without using loops or arrays (2nd way)*/
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int num1, num2, num3, num4, num5, max, min;

cout << "Please Enter 5 Numbers" << endl;
cin >> num1;
cin >> num2;
cin >> num3;
cin >> num4;
cin >> num5;

max = min = num1;
// If all numbers are lower than num1 then num1 is max.
// If all numbers are higher than num1 then num1 is min.

// Maximum
if (num2 > num3 && num2 > num4 && num2 > num5)
{
	max = num2;
}
else if (num3 > num4 && num3 > num5)
{
	max = num3;
}
else if (num4 > num5)
{
	max = num4;
}
else
{
	max = num5;
}

// Minimum
if (num2 < num3 && num2 < num4 && num2 < num5)
{
	min = num2;
}
else if (num3 < num4 && num3 < num5)
{
	min = num3;
}
else if (num4 < num5)
{
	min = num4;
}
else
{
	min = num5;
}

cout << "Max Value is: " << max << endl;
cout << "Min Value is: " << min << endl;

getch();
return 0;
}