#include "ScreenDrawer.hpp"

#include <iostream>
#include <sstream>
using namespace std;

ScreenDrawer::ScreenDrawer()
<<<<<<< HEAD
	: SCREEN_WIDTH(80), SCREEN_HEIGHT(20)
=======
	: SCREEN_WIDTH( 80 ), SCREEN_HEIGHT( 20 )
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
{
	Clear();
}

void ScreenDrawer::Clear()
{
	for (int y = 0; y < SCREEN_HEIGHT; y++)
	{
		for (int x = 0; x < SCREEN_WIDTH; x++)
		{
			m_grid[x][y] = ' ';
		}
	}
}

void ScreenDrawer::Clear(int x, int y)
{
	Set(x, y, ' ');
}

void ScreenDrawer::Set(int x, int y, char symbol)
{
	if (IsValidRange(x, y))
	{
		m_grid[x][y] = symbol;
	}
}

void ScreenDrawer::Set(int x, int y, int number)
{
	// Convert int to char
	ostringstream oss;
	oss << number;
	Set(x, y, oss.str());
}

void ScreenDrawer::Set(int x, int y, string str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (i >= SCREEN_WIDTH) { break; }
<<<<<<< HEAD
		Set(x + i, y, str[i]);
=======
		Set(x+i, y, str[i]);
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
	}
}

void ScreenDrawer::Draw()
{
	ClearConsole();
<<<<<<< HEAD
	for (int y = 0; y < SCREEN_HEIGHT; y++)
=======
	for (int y = 0; y < SCREEN_HEIGHT;y++)
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
	{
		for (int x = 0; x < SCREEN_WIDTH; x++)
		{
			cout << m_grid[x][y];
		}
		cout << endl;
	}
	cout << endl;
}

int ScreenDrawer::GetScreenWidth() const
{
	return SCREEN_WIDTH;
}

int ScreenDrawer::GetScreenHeight() const
{
	return SCREEN_HEIGHT;
}

void ScreenDrawer::ClearConsole()
{
<<<<<<< HEAD
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	system("cls");
#else
	system("clear");
#endif
=======
	#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
		system("cls");
	#else
		system("clear");
	#endif
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
}

bool ScreenDrawer::IsValidRange(int x, int y)
{
	return (x >= 0 && x < SCREEN_WIDTH&& y >= 0 && y < SCREEN_HEIGHT);
<<<<<<< HEAD
}
=======
}
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
