#include <iostream>
#include <conio.h>

/*
 VARS
 - bool stopLoop
 - int presses
 - char objectiveKey
 - char key

 LOOPS
 - frame loop (while)
 - draw presses loop (for)

 OTHERS
 - get key (std::cin)
 - compare keys (if)
 - increase presses (++)
 
*/

int main()
{
	bool shouldClose = false;
	int path = 0;
	const int advanceKey = static_cast<int>(' ');

	do
	{
		// --------------------- R E S E T ---------------------
		int key = 0;

		// --------------------- U P D A T E ---------------------
		// Get input
		if (_kbhit())
			key = _getch();

		if (key == advanceKey)
			path++;

		// --------------------- D R A W ---------------------
		if (key != 0)
		{
			system("cls");

			std::cout << path;

			for (int i = 0; i < path; i++)
				std::cout << " -";
		}

	} while (!shouldClose);
}