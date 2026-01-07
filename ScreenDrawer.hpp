#ifndef _SCREEN_DRAWER_HPP
#define _SCREEN_DRAWER_HPP

#include <string>
using namespace std;

class ScreenDrawer
{
public:
	ScreenDrawer();

	void Clear();
	void Clear(int x, int y);
	void Set(int x, int y, char symbol);
	void Set(int x, int y, int number);
	void Set(int x, int y, string str);

	void Draw();

	int GetScreenWidth() const;
	int GetScreenHeight() const;

private:
	const int SCREEN_WIDTH; // 80
	const int SCREEN_HEIGHT; // 20

	bool IsValidRange(int x, int y);
	void ClearConsole();

	char m_grid[80][20];
};

<<<<<<< HEAD
#endif
#pragma once
=======
#endif
>>>>>>> d7c9ca5cbc205f16eeecfac2762a5c8ea210fc8f
