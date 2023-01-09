/* User enters 5 numbers, find maximum and minimum
without using loops or arrays (1st way)*/
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

if (num2 > max)
{
	max = num2;
}
else if (num2 < min)
{
	min = num2;
}

if (num3 > max)
{
	max = num3;
}
else if (num3 < min)
{
	min = num3;
}
if (num4 > max)
{
	max = num4;
}
else if (num4 < min)
{
	min = num4;
}

if (num5 > max)
{
	max = num5;
}
else if (num5 < min)
{
	min = num5;
}

cout << "Max Value is: " << max << endl;
cout << "Min Value is: " << min << endl;

getch();
return 0;
}