#include "Computer.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
using namespace std;

//Prints the Computers Attacks 
void Computer::ComputerPrint2()
{
	cout << "  Computer Guesses " << endl; 
	cout << "  0 1 2 3 4 5 6 7 8" << endl;
	for (int i = 0; i < 9; i++)
	{
		if (i == 0)
		{
			cout << i << " ";
		}
		else if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
		{
			cout << i << " ";
		}


		for (int j = 0; j < 9; j++)
		{
			cout << ComputerGuesses[i][j] << " ";

			if (j == 8)
			{
				cout << endl;
			}
		}
	}
}

//Prints the Computers Ships
void Computer::ComputerPrint()
{
	cout << "    Computer Ships" << endl; 
	cout << "  0 1 2 3 4 5 6 7 8 " << endl; 
	for (int i = 0; i < 9; i++)
	{
		if (i == 0)
		{
			cout << i << " ";
		}
		else if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
		{
			cout << i << " ";
		}
		for (int j = 0; j < 9; j++)
		{
			cout << ComputerShips[i][j] << " "; 
			if (j == 8)
			{
				cout << endl; 
			}
		}
	}
	cout << endl; 
}

//Randomly Generates a number for the row and another for the column 
void Computer::ComputerCoordinates()
{
	while (Continue == false || ships < 4)
	{
		unsigned seed = time(0);
		srand(seed);

		xcoord = (rand() % 8);
		ycoord = (rand() % 8);
		
		Check(); 
	}
}

//Checks if the coordinate is taken by a previous ship
void Computer::Check()
{
	if (ComputerShips[ycoord + 1][xcoord] == '.')
	{
		if (ships == 0)
		{
			ComputerShips[ycoord + 1][xcoord] = 'P';
		}
		else if (ships == 1)
		{
			ComputerShips[ycoord + 1][xcoord] = 'S';
		}
		else if (ships == 2)
		{
			ComputerShips[ycoord + 1][xcoord] = 'D';
		}
		else if (ships == 3)
		{
			ComputerShips[ycoord + 1][xcoord] = 'H';
		}

		ComputerHorV(); 
	}
	else
	{
		Continue = true; 
	}
}

// Randomly picks if the ship is set horizontal or vertical and checks if the spots are open 
void Computer::ComputerHorV()
{
	unsigned seed2 = time(0);
	srand(seed2); 
	direction = rand() % 2; 

	if (direction == 0)
	{
		if (ships == 0 && ycoord + 2 < 8 && ComputerShips[ycoord + 2][xcoord] == '.')
		{
			ComputerShips[ycoord + 2][xcoord] = 'P';
			ships++;
		}
		else if (ships == 1 && ycoord + 3 < 8 && ComputerShips[ycoord + 2][xcoord] == '.' && ComputerShips[ycoord + 3][xcoord] == '.')
	
		{
			ComputerShips[ycoord + 2][xcoord] = 'S';
			ComputerShips[ycoord + 3][xcoord] = 'S';
			ships = 2;
		}
		else if (ships == 2 && ycoord + 4 < 8 && ComputerShips[ycoord + 2][xcoord] == '.' && ComputerShips[ycoord + 3][xcoord] == '.' && ComputerShips[ycoord + 4][xcoord] == '.')
		{
			ComputerShips[ycoord + 2][xcoord] = 'D';
			ComputerShips[ycoord + 3][xcoord] = 'D';
			ComputerShips[ycoord + 4][xcoord] = 'D';
			ships = 3;
		}
		else if (ships == 3 && ycoord + 5 < 8 && ComputerShips[ycoord + 2][xcoord] == '.' && ComputerShips[ycoord + 3][xcoord] == '.' && ComputerShips[ycoord + 4][xcoord] == '.' && ComputerShips[ycoord + 5][xcoord] == '.')
		{
			ComputerShips[ycoord + 2][xcoord] = 'H';
			ComputerShips[ycoord + 3][xcoord] = 'H';
			ComputerShips[ycoord + 4][xcoord] = 'H';
			ComputerShips[ycoord + 5][xcoord] = 'H';
			ships = 4;
		}
		else
		{
			ComputerShips[ycoord + 1][xcoord] = '.'; 
			Continue = true;
		}
	}
	else if (direction == 1)
	{
		if (ships == 0 && xcoord + 1 < 8 && ComputerShips[ycoord + 1][xcoord] == '.' && ComputerShips[ycoord + 1][xcoord + 1] == '.')
		{
			ComputerShips[ycoord + 1][xcoord + 1] = 'P';
			ships = 1;
		}
		else if (ships == 1 && xcoord + 2 < 8 && ComputerShips[ycoord + 1][xcoord + 1] == '.' && ComputerShips[ycoord + 1][xcoord + 2] == '.')
		{
			ComputerShips[ycoord + 1][xcoord + 1] = 'S';
			ComputerShips[ycoord + 1][xcoord + 2] = 'S';
			ships = 2;
		}
		else if (ships == 2 && xcoord + 3 < 8 && ComputerShips[ycoord + 1][xcoord + 1] == '.' && ComputerShips[ycoord + 1][xcoord + 2] == '.' && ComputerShips[ycoord + 1][xcoord + 3] == '.')
		{
			ComputerShips[ycoord + 1][xcoord + 1] = 'D';
			ComputerShips[ycoord + 1][xcoord + 2] = 'D';
			ComputerShips[ycoord+ 1][xcoord + 3] = 'D';
			ships = 3;
		}
		else if (ships == 3 && xcoord + 4 < 8 && ComputerShips[ycoord + 1][xcoord + 1] == '.' && ComputerShips[ycoord + 1][xcoord + 2] == '.' && ComputerShips[ycoord + 1][xcoord + 3] == '.')
		{
			ComputerShips[ycoord + 1][xcoord + 1] = 'H';
			ComputerShips[ycoord + 1][xcoord + 2] = 'H';
			ComputerShips[ycoord + 1][xcoord + 3] = 'H';
			ComputerShips[ycoord + 1][xcoord + 4] = 'H';
			ships = 4;
		}
		else
		{
			ComputerShips[ycoord + 1][xcoord] = '.';
			Continue = true;
		}
	}
}