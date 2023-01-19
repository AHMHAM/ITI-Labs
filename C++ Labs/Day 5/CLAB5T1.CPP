/*
Class with 4 students and 3 subjects
find total of each student,
find average of each subject.
*/
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int i, j;
float sum = 0, average = 0;
// 4 Students, 3 Subjects
int grades[4][3] = {{70, 71, 72}, {73, 74, 75}, {76, 77, 78}, {79, 80, 81}};

// If array is not intialized you can use cin.
/*
for(i=0; i<4; i++)
{
	for(int j=0; j<3; j++)
	{
		cin >> grades[i][j];
	}
}
*/

// Sum of each student's grades
for (i = 0; i < 4; i++)
{
	sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum = sum + grades[i][j];
	}
	cout << "Student " << i + 1 << " total is: " << sum << endl;
}

// Average of each subject
for (j = 0; j < 3; j++)
{
	average = 0;
	for (i = 0; i < 4; i++)
	{
		average = average + grades[i][j];
	}
	average = average / 4;
	cout << "Average of subject " << j + 1 << " is " << average << endl;
}

// The code below is also valid. Note that it is [j][i] in this case not [i][j]
/*
for(i=0; i<3; i++)
{
	average = 0;
	for(j=0; j<4; j++)
	{
		average = average + grades[j][i];
	}
	average = average/4;
	cout << "Average of subject " << i+1 << " is " << average << endl;
}
*/

getch();
return 0;
}