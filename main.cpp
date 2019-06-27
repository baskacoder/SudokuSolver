#include <iostream>
#include "ConsoleLib.h"
#include <conio.h>
#include <windows.h>
using namespace std;
class onecell;
void funk(onecell &);
//функци€, котора€ рисует поле
void field()
{
	SetColor(Blue, Black);
	char a196 = 196;
	char a218 = 218;
	char a194 = 194;
	char a191 = 191;
	WriteChar(4, 5, a218);
	WriteChars(5, 5, a196, 3);
	WriteChar(8, 5, a194);
	WriteChars(9, 5, a196, 3);
	WriteChar(12, 5, a194);
	WriteChars(13, 5, a196, 3);
	WriteChar(16, 5, a194);
	WriteChars(17, 5, a196, 3);
	WriteChar(20, 5, a194);
	WriteChars(21, 5, a196, 3);
	WriteChar(24, 5, a194);
	WriteChars(25, 5, a196, 3);
	WriteChar(28, 5, a194);
	WriteChars(29, 5, a196, 3);
	WriteChar(32, 5, a194);
	WriteChars(33, 5, a196, 3);
	WriteChar(36, 5, a194);
	WriteChars(37, 5, a196, 3);
	WriteChar(40, 5, a191);
	SetColor(White, Black);
	char b179 = 179;
	char b195 = 195;
	char b192 = 192;
	char b193 = 193;
	char b197 = 197;
	char b217 = 217;
	char b180 = 180;
	SetColor(Blue, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 7, b195);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 9, b195);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 11, b195);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 13, b195);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 15, b195);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 17, b195);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 19, b195);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 21, b195);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(4, i, b179);
	}
	WriteChar(4, 23, b192);
	SetColor(White, Black);
	WriteChars(5, 7, a196, 3);
	WriteChars(5, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(5, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(5, 13, a196, 3);
	WriteChars(5, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(5, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(5, 19, a196, 3);
	WriteChars(5, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(5, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(8, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(8, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(8, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(8, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(8, i, b179);
	}
	WriteChar(8, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(8, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(8, 23, b193);
	SetColor(White, Black);
	WriteChars(9, 7, a196, 3);
	WriteChars(9, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(9, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(9, 13, a196, 3);
	WriteChars(9, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(9, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(9, 19, a196, 3);
	WriteChars(9, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(9, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(12, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(12, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(12, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(12, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(12, i, b179);
	}
	WriteChar(12, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(12, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(12, 23, b193);
	SetColor(White, Black);
	WriteChars(13, 7, a196, 3);
	WriteChars(13, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(13, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(13, 13, a196, 3);
	WriteChars(13, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(13, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(13, 19, a196, 3);
	WriteChars(13, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(13, 23, a196, 3);
	SetColor(Blue, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 11, b197);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 17, b197);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(16, i, b179);
	}
	WriteChar(16, 23, b193);
	SetColor(White, Black);
	WriteChars(17, 7, a196, 3);
	WriteChars(17, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(17, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(17, 13, a196, 3);
	WriteChars(17, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(17, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(17, 19, a196, 3);
	WriteChars(17, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(17, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(20, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(20, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(20, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(20, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(20, i, b179);
	}
	WriteChar(20, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(20, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(20, 23, b193);
	SetColor(White, Black);
	WriteChars(21, 7, a196, 3);
	WriteChars(21, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(21, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(21, 13, a196, 3);
	WriteChars(21, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(21, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(21, 19, a196, 3);
	WriteChars(21, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(21, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(24, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(24, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(24, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(24, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(24, i, b179);
	}
	WriteChar(24, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(24, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(24, 23, b193);
	SetColor(White, Black);
	WriteChars(25, 7, a196, 3);
	WriteChars(25, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(25, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(25, 13, a196, 3);
	WriteChars(25, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(25, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(25, 19, a196, 3);
	WriteChars(25, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(25, 23, a196, 3);
	SetColor(White, Black);
	SetColor(Blue, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(28, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(28, 11, b197);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 17, b197);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(28, i, b179);
	}
	WriteChar(28, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(28, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(28, 23, b193);
	SetColor(White, Black);
	SetColor(White, Black);
	WriteChars(29, 7, a196, 3);
	WriteChars(29, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(29, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(29, 13, a196, 3);
	WriteChars(29, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(29, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(29, 19, a196, 3);
	WriteChars(29, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(29, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(32, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(32, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(32, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(32, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(32, i, b179);
	}
	WriteChar(32, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(32, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(32, 23, b193);
	SetColor(White, Black);
	WriteChars(33, 7, a196, 3);
	WriteChars(33, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(33, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(33, 13, a196, 3);
	WriteChars(33, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(33, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(33, 19, a196, 3);
	WriteChars(33, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(33, 23, a196, 3);
	SetColor(White, Black);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 7, b197);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 9, b197);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(36, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(36, 11, b197);
	SetColor(White, Black);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 13, b197);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 15, b197);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(36, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(36, 17, b197);
	SetColor(White, Black);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 19, b197);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(36, i, b179);
	}
	WriteChar(36, 21, b197);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(36, i, b179);
	}
	SetColor(Blue, Black);
	WriteChar(36, 23, b193);
	SetColor(White, Black);
	WriteChars(37, 7, a196, 3);
	WriteChars(37, 9, a196, 3);
	SetColor(Blue, Black);
	WriteChars(37, 11, a196, 3);
	SetColor(White, Black);
	WriteChars(37, 13, a196, 3);
	WriteChars(37, 15, a196, 3);
	SetColor(Blue, Black);
	WriteChars(37, 17, a196, 3);
	SetColor(White, Black);
	WriteChars(37, 19, a196, 3);
	WriteChars(37, 21, a196, 3);
	SetColor(Blue, Black);
	WriteChars(37, 23, a196, 3);
	for (int i = 6; i < 7; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 7, b180);
	for (int i = 8; i < 9; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 9, b180);
	for (int i = 10; i < 11; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 11, b180);
	for (int i = 12; i < 13; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 13, b180);
	for (int i = 14; i < 15; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 15, b180);
	for (int i = 16; i < 17; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 17, b180);
	for (int i = 18; i < 19; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 19, b180);
	for (int i = 20; i < 21; i++)
	{
		WriteChar(40, i, b179);
	}
	WriteChar(40, 21, b180);
	for (int i = 22; i < 23; i++)
	{
		WriteChar(40, i, b179);
	}

	WriteChar(40, 23, b217);
	SetColor(White, Black);
}
class one
{
protected:
	int x;//координата по х
	int y;//координата по y
public:
	one()
	{
		x = 4;
		y = 5;
	}
	//функци€, котора€ рисует клеточку дл€ расстановки цифр по координате х и у
	void o();
	//функци€, котора€ мен€ет координаты х и у при нажатии данных клавиш
	void coord(int);

};
void one::o()
{
	SetColor(Brown, Black);
	char a218 = 218;
	char a196 = 196;
	char a191 = 191;
	char b179 = 179;
	char b192 = 192;
	char b193 = 193;
	char b217 = 217;
	WriteChar(x, y, a218);
	WriteChars(x + 1, y, a196, 3);
	WriteChar(x + 4, y, a191);
	WriteChar(x, y + 2, b192);
	WriteChar(x, y + 1, b179);
	WriteChars(x + 1, y + 2, a196, 3);
	WriteChar(x + 4, y + 1, b179);
	WriteChar(x + 4, y + 2, b217);
}
void one::coord(int e)
{
	if (e == 'a' && x > 4)
	{
		x = x - 4;
		Beep(247, 500);
	}
	else if (e == 'w' && y > 5)
	{
		y = y - 2;
		Beep(247, 500);
	}
	else if (e == 'd'&& x < 36)
	{
		x = x + 4;
		Beep(247, 500);
	}
	else if (e == 's' && y < 21)
	{
		y = y + 2;
		Beep(247, 500);
	}
}
class cell :public one
{
protected:
	int mass[9][9];
public:
	cell()
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				mass[i][j] = 0;
			}
		}
	}
	//функци€ дл€ заполнени€ массива (mass[9][9])
	void chisla(int);
	//функци€, котора€ выводит все начальные значени€ судоку
	void get();
};
void cell::get()
{
	int tempx = 0;
	int tempy = 0;
	for (int i = 5; i < 23; i = i + 2)
	{
		for (int j = 4; j < 40; j = j + 4)
		{
			if (mass[tempy][tempx] != 0)
			{
				WriteChar(j + 2, i + 1, mass[tempy][tempx] + '0');
			}
			tempx++;
		}
		tempx = 0;
		tempy++;
	}
}
void cell::chisla(int e)
{
	int cy = 0;
	int cx = 0;
	if (e > 47 && e < 58)
	{
		for (int i = 4; i < 36; i = i + 4)
		{
			if (x == i)
			{
				break;
			}
			cx++;
		}
		for (int i = 5; i < 21; i = i + 2)
		{
			if (y == i)
			{
				break;
			}
			cy++;
		}
		mass[cy][cx] = e - '0';
	}
}
class onecell : public cell
{
public:
	//функци€, провер€юща€, имеетс€ ли данное число в маленьком квадрате 9х9
	bool square(int, int, int);
	//функци€, провер€юща€, имеетс€ ли данное число строке
	bool horizont(int, int);
	//функци€, провер€юща€, имеетс€ ли данное число столбце
	bool vertical(int, int);
	onecell& operator = (onecell&);
	//функци€, решающа€ судоку
	int solveSudoku(int, int);
	//обнул€ет массив 9х9
	void zero();
};
void onecell::zero()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			mass[i][j] = 0;
		}
	}
}
int onecell::solveSudoku(int y, int x)
{
	int value = 1;
	int tx = 0, ty = 0;
	if (mass[y][x] != 0)
	{
		if (x == 8 && y == 8)
		{
			return 1;
		}
		if (x < 8)
		{
			x++;
		}
		else
		{
			if (y < 8)
			{
				x = 0;
				y++;
			}
		}
		if (solveSudoku(y, x))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (mass[y][x] == 0)
	{
		while (value < 10)
		{
			if (square(x, y, value) && horizont(x, value) && vertical(y, value))
			{
				mass[y][x] = value;
				if (x == 8 && y == 8)
				{
					return 1;
				}
				if (x < 8)
				{
					tx = x + 1;
				}
				else
				{
					if (y < 8)
					{
						tx = 0;
						ty = y + 1;
					}
				}
				if (solveSudoku(ty, tx))
				{
					return 1;
				}
			}
			value++;
		}
		mass[y][x] = 0;
		return 0;
	}

}
onecell& onecell::operator =(onecell& obj)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			mass[i][j] = obj.mass[i][j];
		}
	}
	return *this;
}
bool onecell::vertical(int yi, int value)
{
	for (int j = 0; j < 9; j++)
	{
		if (mass[yi][j] == value)
		{
			return false;
		}
	}
	return true;
}
bool onecell::horizont(int xi, int value)
{
	for (int j = 0; j < 9; j++)
	{
		if (mass[j][xi] == value)
		{
			return false;
		}
	}
	return true;
}
bool onecell::square(int xi, int yi, int value)
{
	if (xi >= 0 && xi < 3)
	{
		xi = 0;
	}
	else if (xi >= 3 && xi < 6)
	{
		xi = 3;
	}
	else if (xi >= 6 && xi <= 8)
	{
		xi = 6;
	}
	if (yi >= 0 && yi < 3)
	{
		yi = 0;
	}
	else if (yi >= 3 && yi < 6)
	{
		yi = 3;
	}
	else if (yi >= 6 && yi <= 8)
	{
		yi = 6;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mass[yi + i][xi + j] == value)
			{
				return false;
			}
		}
	}
	return true;
}
void main()
{
	GotoXY(25, 0);
	ShowCursor(false);
	SetColor(Green, Black);
	cout << "Solver Sudoku";
	GotoXY(0, 5);
	SetColor(Green, Black);
	WriteStr(0, 3, "Creator: Aleksandra Strelchuk");
	cout << endl << "Enter the initial values already existing in the crossword,\nwhich you must solve,\nand then the programm will give you finished result" << endl;
	cout << "Press 5 to continue ..." << endl;
	char enter = 0;
	int a = 0;
	cin >> a;
	onecell obj;
	onecell masobj;
	do
	{
		system("cls");
		obj.zero();//обнул€ем массив
		int e = 0;
		do
		{
			GotoXY(45, 8);
			SetColor(Red, Black);
			cout << "W - Up" << endl;
			GotoXY(45, 9);
			cout << "S - Down" << endl;
			GotoXY(45, 10);
			cout << "A - Left" << endl;
			GotoXY(45, 11);
			cout << "D - Right" << endl;
			GotoXY(45, 12);
			cout << "0 - To clean the cell" << endl;
			GotoXY(45, 13);
			cout << "Enter - To solve sudoku" << endl;
			field();
			obj.o();
			obj.chisla(e);
			obj.get();
			e = _getch();
			obj.coord(e);
			system("cls");
		} while (e != 13);
		int x = 0;
		int y = 0;
		masobj = obj;
		masobj.solveSudoku(y, x);
		field();
		masobj.get();
		GotoXY(45, 8);
		cout << "Press 5 to continue ... ";
		GotoXY(45, 9);
		cin >> a;
	} while (a == 5);
	GotoXY(45, 25);
	system("pause");
}
