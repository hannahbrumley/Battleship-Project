#include "Player.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
using namespace std;

//Runs the Program
void Player::Run()
{
	Print(); 
	computer.ComputerCoordinates();
	SetPlayerShips(); 
	PlayGame(); 
}

//Prints both the Players Ships and Attacks 
void Player::Print()
{
<<<<<<< HEAD

	screen.Set(0, 0, "------------------------ BattleShip ------------------------");
	screen.Set(0, 1, "   Player's Ships                         Player's Guesses");
=======
	screen.Set(0, 0, "----------------------------------------- BattleShip -----------------------------------------");
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
	
	int leftColX = 0;
	int rightColX = screen.GetScreenWidth() / 2;

	// Headers
<<<<<<< HEAD
	screen.Set(leftColX, 2, "  0 1 2 3 4 5 6 7 8 ");
	screen.Set(rightColX, 2, "  0 1 2 3 4 5 6 7 8 ");

	// Player Ships output
	int gridX = 0;
	int gridY = 3;
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (x == 0)
			{
				screen.Set(gridX, gridY + y, y);
			}
			else
			{
				int outX = gridX + (x * 2);
				screen.Set(outX, gridY + y, PlayerShips[x][y]);
			}
		}
	}

	// Player Guesses output
	gridX = rightColX;
	gridY = 3;
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (x == 0)
			{
				screen.Set(gridX, gridY + y, y);
			}
			else
			{
				int outX = gridX + (x * 2);
				screen.Set(outX, gridY + y, PlayerGuesses[x][y]);
			}
		}
	}


	screen.Draw();

}

//Asks the Player to Enter a Row and Coloumn for a potential ship
void Player::SetPlayerShips()
{
	while (shipCoord = false || boat < 4)
	{
		if (boat == 0)
		{
			cout << "Enter the Row for Your Patrol Boat (2 Spots): ";
			cin >> input_xcoordinate;
			cout << endl;
			cout << "Enter the Column for Your Patrol Boat (2 Spots): ";
			cin >> input_ycoordinate;
			ValidCoordinates();
		}
		else if (boat == 1)
		{
			cout << "Enter the Row for Your Submarine (3 Spots): ";
			cin >> input_xcoordinate; 
			cout << endl; 
			cout << "Enter the Column for Your Submarine (3 Spots): ";
			cin >> input_ycoordinate; 
			cout << endl; 
			ValidCoordinates(); 
		}

		else if (boat == 2)
		{
			cout << "Enter the Row for Your Destroyer (4 Spots): ";
			cin >> input_xcoordinate;
			cout << endl;
			cout << "Enter the Column for Your Destroyer (4 Spots): ";
			cin >> input_ycoordinate;
			cout << endl;
			ValidCoordinates();
		}
		else if (boat == 3)
		{
			cout << "Enter the Row for Your HeliCarrier (5 Spots): ";
			cin >> input_xcoordinate;
			cout << endl;
			cout << "Enter the Column for Your HeliCarrior (5 Spots): ";
			cin >> input_ycoordinate;
			cout << endl;
			ValidCoordinates();
		}
	}
}

//Checks if the Coordinates are to between 0 and 9
void Player::ValidCoordinates()
{
	if (input_xcoordinate < 0 || input_ycoordinate < 0 || input_xcoordinate > 8 || input_ycoordinate>8)
	{
		PlayerShips[input_ycoordinate + 1][input_xcoordinate] = '.';
		shipCoord = true; 

		cout << "Error: You have entered Invalid Coordinates" << endl; 
	}
	else
	{
		CheckCoordinates(); 
	}
}

//Checks if the Coordinates are open
void Player::CheckCoordinates()
{
	if (PlayerShips[input_ycoordinate + 1][input_xcoordinate] == '.')
	{
		if (boat == 0)
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = 'P';
			Print();
		}

		else if (boat == 1)
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = 'S';
		}
		else if (boat == 2)
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = 'D';
		}
		else if (boat == 3)
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = 'H';
		}


		GetHorizonatlorVertical();
	}

	else
	{
		cout << "Error: This spot is already occupied!" << endl; 
		shipCoord = true; 
	}
}

//Asks if the Player wants to Set the Ship Vertically or Horizontally and Checks if the Space is Open
void Player::GetHorizonatlorVertical()
{
	Print();
	 
	cout << "Do you Want to Set the Ship Horizontally (h) or Vertically (v): "; 
	cin >> Set; 
	cout << endl; 

	if (Set == 'h')
	{
		if (boat == 0 && input_ycoordinate + 2 < 9 && PlayerShips[input_ycoordinate + 2][input_xcoordinate] == '.')
		{
			PlayerShips[input_ycoordinate + 2][input_xcoordinate] = 'P';
			Print(); 
			boat =+ 1;
		}
		else if (boat == 1 && input_ycoordinate + 3 < 9 && PlayerShips[input_ycoordinate + 2][input_xcoordinate] == '.' && PlayerShips[input_ycoordinate + 3][input_xcoordinate] == '.')
		{
			PlayerShips[input_ycoordinate + 2][input_xcoordinate] = 'S';
			PlayerShips[input_ycoordinate + 3][input_xcoordinate] = 'S';
			Print();
			boat = 2;
		}
		else if (boat == 2 && input_ycoordinate + 4 < 9 && PlayerShips[input_ycoordinate + 2][input_xcoordinate] == '.' && PlayerShips[input_ycoordinate + 3][input_xcoordinate] == '.' && PlayerShips[input_ycoordinate + 4][input_xcoordinate] == '.')
		{
			PlayerShips[input_ycoordinate + 2][input_xcoordinate] = 'D';
			PlayerShips[input_ycoordinate + 3][input_xcoordinate] = 'D';
			PlayerShips[input_ycoordinate + 4][input_xcoordinate] = 'D';
			Print();
			boat = 3;
		}
		else if (boat == 3 && input_ycoordinate + 5 < 9 && PlayerShips[input_ycoordinate + 2 ][input_xcoordinate] == '.' && PlayerShips[input_ycoordinate + 3][input_xcoordinate] == '.' && PlayerShips[input_ycoordinate + 4][input_xcoordinate] == '.'  && PlayerShips[input_ycoordinate + 5][input_xcoordinate] == '.')
		{
			PlayerShips[input_ycoordinate + 2][input_xcoordinate] = 'H';
			PlayerShips[input_ycoordinate + 3][input_xcoordinate] = 'H';
			PlayerShips[input_ycoordinate + 4][input_xcoordinate] = 'H';
			PlayerShips[input_ycoordinate + 5][input_xcoordinate] = 'H';
			Print();
			boat = 4;
		}
		else
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = '.'; 
			Print();
			cout << "Error: Not Enough Space to Set the Ship Horizontally" << endl;
			shipCoord = true;
		}
	}
	else if (Set == 'v')
	{
		if (boat == 0 && input_xcoordinate +1 < 9 && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] == '.')
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] = 'P';
			Print();
			boat = 1;
		}
		else if (boat == 1 && input_xcoordinate + 2 < 9 && PlayerShips[input_ycoordinate  + 1][input_xcoordinate +1] == '.' && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] == '.')
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] = 'S';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] = 'S';
			Print();
			boat = 2;
		}
		else if (boat == 2 && input_xcoordinate + 3 < 9 && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] == '.' && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] == '.' && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 3] == '.')
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] = 'D';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] = 'D';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 3] = 'D';
			Print(); 
			boat = 3;
		}
		else if (boat == 3 && input_xcoordinate + 4 < 9 && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] == '.' && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] == '.' && PlayerShips[input_ycoordinate + 1][input_xcoordinate + 3] == '.')
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 1] = 'H';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 2] = 'H';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 3] = 'H';
			PlayerShips[input_ycoordinate + 1][input_xcoordinate + 4] = 'H';
			Print();
			boat = 4;
		}
		else
		{
			PlayerShips[input_ycoordinate + 1][input_xcoordinate] = '.';
			Print();
			cout << "Error: Not Enough Space to Set the Ship Vertically" << endl;
			shipCoord = true;
		}
		
	}
	else
	{
		PlayerShips[input_ycoordinate + 1][input_xcoordinate] = '.';
		cout << "Error: Invalid Input!" << endl; 
		shipCoord = true; 
	}
}
=======
	screen.Set(leftColX, 2, "0 1 2 3 4 5 6 7 8 9");
	screen.Set(rightColX, 2, "0 1 2 3 4 5 6 7 8 9");

	// Player Ships output
	int gridX = 0;
	int gridY = 3;
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (x == 0)
			{
				screen.Set(gridX, gridY + y, y);
			}
			else
			{
				int outX = gridX + (x * 2);
				screen.Set(outX, gridY + y, PlayerShips[x][y]);
			}
		}
	}

	// Player Guesses output
	gridX = rightColX;
	gridY = 3;
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if (x == 0)
			{
				screen.Set(gridX, gridY + y, y);
			}
			else
			{
				int outX = gridX + (x * 2);
				screen.Set(outX, gridY + y, PlayerGuesses[x][y]);
			}
		}
	}
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f

//Asks the Player to Enter Coordinates to Attack the Computer's Ships and Records if the Coordinates match the Computer's Ship or not
void Player::PlayGame()
{
	while (done == false)
	{
		cout << "Pick a Row to Attack: ";
		cin >> attack_ycoord;
		cout << endl;

<<<<<<< HEAD
		cout << "Pick a Column to Attack: "; 
		cin >> attack_xcoord; 
		cout << endl; 


		if (attack_ycoord < 9 && attack_xcoord < 9)
		{
			if (computer.ComputerShips[attack_ycoord][attack_xcoord] == 'P' || computer.ComputerShips[attack_ycoord][attack_xcoord] == 'S' || computer.ComputerShips[attack_ycoord][attack_xcoord] == 'D' || computer.ComputerShips[attack_ycoord][attack_xcoord] == 'H')
			{
				cout << "Hit" << endl;
				PlayerGuesses[attack_xcoord + 1][attack_ycoord] = 'x';
				Print();
				player_score = player_score + 1;
			}
			else if (player_score > 13 || computer_score  > 13)
			{
				done = true; 
				cout << "Computer Score: " << computer_score << endl; 
				cout << "PLayer Score: " << player_score << endl; 
				computer.ComputerPrint2(); 
			}
			else
			{
				cout << "Miss" << endl;
				PlayerGuesses[attack_xcoord + 1][attack_ycoord] = 'o';
				computer.ComputerPrint();
				Print();
			}
		
			ComputerGuess(); 
		}

		else
		{
			Print(); 
			computer.ComputerPrint(); 
			computer.ComputerPrint2(); 
			done = true; 
		}
	}
	cout << "------------------------Game Over------------------------" << endl << endl;
	if (player_score > computer_score)
	{
		cout << "Player Wins!!" << endl << endl; 
	}
	else
	{
		cout << "You Loose." << endl; 
		cout << "Better Luck Next Time" << endl << endl; 
	}
	cout << "Player Score: " << player_score << endl; 
	cout << "Computer Score: " << computer_score << endl;
	computer.ComputerPrint();
	computer.ComputerPrint2();
	
}
=======
	screen.Draw();


	//cout << endl << endl;


	//cout << setw(40) << "0 1 2 3 4 5 6 7 8 9 " << setw(41) << "0 1 2 3 4 5 6 7 8 9 " << endl; 
	//
	//for (int i = 0; i < 9; i++)
	//{

	//	if (i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i ==5 || i == 6 || i == 7 || i == 8 || i == 9)
	//	{
	//		cout << setw(21) << i << " " ;
	//		
	//	}
	//
	//	for (int j = 0; j < 9; j++)
	//	{
	//		cout << PlayerShips[i][j] << " " << PlayerGuesses[i][j] << " ";



	//		if (j == 8)
	//		{
	//			cout << endl; 
	//		
	//		}
	//	}



	//}
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f

//Randomly Generates Coordinates for and Checks if they match the players ships or not
void Player::ComputerGuess()
{
	unsigned seed = time(0);

	srand(seed);
	cattack_xcoord = (rand() % 9);
	cattack_ycoord = (rand() % 9);

	if (PlayerShips[cattack_ycoord][cattack_xcoord] == 'P' || PlayerShips[cattack_ycoord][cattack_xcoord] == 'S' || PlayerShips[cattack_ycoord][cattack_xcoord] == 'D' || PlayerShips[cattack_ycoord][cattack_xcoord] == 'H')
	{
		cout << "Computer Hit" << endl;
		computer.ComputerGuesses[cattack_xcoord + 1][cattack_ycoord] = 'x';
		Print();
		computer_score = computer_score + 1;
	}
	else
	{
		cout << "Computer Miss" << endl;
		computer.ComputerGuesses[cattack_xcoord + 1][cattack_ycoord] = 'o';
		Print();
	}
}