/* Find Sum of two numbers */
#include <iostream>
#include <conio> //For clrscr and getch();

int main()
{
     clrscr(); // Clears text window mode and puts cursor at (1,1).

     int firstnumber, secondnumber;

     cout << "Please enter the first number: \n"; // \n is the same as endl
     cin >> firstnumber;

     cout << "Please enter the second number: " << endl;
     cin >> secondnumber;

     cout << "The Value of " << firstnumber << " + "
          << secondnumber << " = " << firstnumber + secondnumber;

     getch(); // To keep text window open after cout
     return 0;
}