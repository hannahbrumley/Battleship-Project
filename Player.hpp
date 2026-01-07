#pragma once


#ifndef _Player
#define _Player 
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

#include "ScreenDrawer.hpp"
<<<<<<< HEAD
#include "Computer.hpp"
=======


>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f

class Player
{
public: 
	
	void Run(); 

	char PlayerShips[9][9] =
	{
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'}


	};
	char PlayerGuesses[10][9] =
	{
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},


	};
	
private:
	
	


	int input_xcoordinate; 
	int input_ycoordinate;

	int attack_xcoord; 
	int attack_ycoord; 

	bool done = false; 

	int player_score = 0; 
	int computer_score = 0; 


	int boat = 0; 
	int spots = 0; 
	char Set; 
	bool shipCoord = false; 

	void ValidCoordinates(); 
	void CheckCoordinates(); 
	void GetHorizonatlorVertical(); 
	void Print();

	ScreenDrawer screen;
<<<<<<< HEAD

	void SetPlayerShips(); 
	void ComputerGuess(); 
	void PlayGame(); 
	

	int cattack_xcoord; 
	int cattack_ycoord; 

	Computer computer; 
=======
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
	
};



#endif


