/* Solve 2nd degree equation
aX^2 + bX + c */

#include <iostream.h>
#include <conio.h>
#include <math.h> // For square root (sqrt)

int main()
{
clrscr();
float a, b, c, root1, root2, discriminant;
cout << "Enter Coefficients A, B and C: " << endl;
cin >> a;
cin >> b;
cin >> c;

discriminant = b * b - 4 * a * c;
if (discriminant > 0)
{
	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);
	cout << "1st root is = " << root1 << endl;
	cout << "2nd root is = " << root2 << endl;
}
else if (discriminant == 0)
{
	root1 = -b / (2 * a);
	cout << "Root is equal to " << root1 << endl;
}
else
{
	cout << "Roots are Imaginary" << endl;
}

getch();
return 0;
}