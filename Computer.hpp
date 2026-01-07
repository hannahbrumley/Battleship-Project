#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#include <cstdlib>
#include <ctime>

using namespace std;
#ifndef _Computer
#define _Computer 



class Computer
{
public: 
	void ComputerCoordinates();
	void Check(); 
	void ComputerHorV(); 
	void ComputerPrint(); 
	void ComputerPrint2(); 
	char ComputerShips[9][9] =
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
	char ComputerGuesses[9][9] =
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

private: 
	


	
	int xcoord  = 0; 
	int ycoord = 0; 
	int ships = 0; 
	bool Continue = false; 
	int direction; 
	
};


#endif
