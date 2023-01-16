/* Magic Box Matrix
Fill matrix with numbers from 1 to n*n */
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
int sizeofmatrix, totalsize, col = 1, row = 1, i;

cout << "Please enter size of Matrix: " << endl;
cin >> sizeofmatrix;
totalsize = sizeofmatrix * sizeofmatrix;

if (sizeofmatrix % 2) // Odd number
{
	cout << "Magic box size: " << sizeofmatrix << "*" << sizeofmatrix
		 << endl << endl;

	for (i = 1; i <= totalsize; i++)
	{
		if (i == 1)
		{
			row = 1;
			col = (sizeofmatrix + 1) / 2;
		}
		else if (!((i - 1) % sizeofmatrix))
		{
			row++;
			if (row > sizeofmatrix)
			{
				row = 1;
			}
		}
		else
		{
			row--;
			col--;
			if (row == 0)
			{
				row = sizeofmatrix;
			}
			if (col == 0)
			{
				col = sizeofmatrix;
			}
		}
		cout << "Num " << i << " Row: " << row
			 << " Col: " << col << endl;
		/*
		//Print shape of matrix [needs clrscr() before for loop]
		gotoxy(col*2,row*2);
		cout << i;
		*/
	}
}
else
{
	cout << "Size of matrix must be Odd" << endl;
}

getch();
return 0;
}