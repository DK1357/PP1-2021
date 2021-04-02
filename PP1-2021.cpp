// PP1 2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//function to show user game controls
void Help()
{
	cout << endl;
	cout << "To move in the maze type N, S, E, or W." << endl;
	cout << "To check inventory type I." << endl;
	cout << "To look at the ground type G." << endl;
	cout << "To pick up an item type F, but the ground must first be looked at to see if there is an item." << endl;
	cout << "To equip an item type E." << endl;
	cout << "To see the controls again type H." << endl;
	cout << "To stop the game type Quit or Q" << endl;
	cout << endl;
	return;
}

//function for moving north
int North(int x, int y, int maze[][20])
{
	x = x - 1;
	if (x == -1)
	{
		cout << "That way is blocked." << endl;
		x = x + 1;
	}
	else if(maze[x][y] == 0)
	{
		cout << "That way is blocked." << endl;
		x = x + 1;
	}
	else
	{}
	return x;
}
//for moving south

int South(int x, int y, int maze[][20])
{	
	int check = 0;
	x = x + 1;
	if (maze[x][y] == 0)
	{
		cout << "That way is blocked." << endl;
		x = x - 1;
	}
	else if(maze[x][y] == 1)
	{}
	else if (maze[x][y] == 2)
	{}
	else
	{
		cout << "That way is blocked." << endl;
	}
	return x;
}

//for moving east
int East(int x, int y, int maze[][20])
{
	y = y + 1;
	if (maze[x][y] == 0)
	{
		cout << "That way is blocked." << endl;
		y = y - 1;
	}
	if (maze[x][y] == 1)
	{}
	if(maze[x][y] == 2)
	{}
	else
	{
		cout << "That way is blocked." << endl;
	}
	return y;
}

//for moving west
int West(int x, int y, int maze[][20])
{
	y = y - 1;
	if (y == -1)
	{
		cout << "That way is blocked." << endl;
		y = y + 1;
	}
	else if (maze[x][y] == 0)
	{
		cout << "That way is blocked." << endl;
		y = y + 1;
	}
	else
	{}
	return y;
}

//function to output quit game message
void Quit(string userInput, bool win)
{
	if (win == true)
	{
		cout << "Thank you for playing Maze Escape!" << endl;
	}
	else
	{
		cout << "You Lose" << endl;
		cout << "Thank you for playing Maze Escape!" << endl;
	}
	return;
}
int main()
{
	int maze1[5][20] =
	{
	{ 1, 0, 1, 1, 1, 0 }, // 1 == path, 3 == item on the ground
	{ 1, 0, 0, 1, 0, 0 }, // 2 == exit, 0 == inaccessible/wall
	{ 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 2, 0 }
	};
	int maze2[10][20] =
	{
	{ 1, 0, 1, 1, 1, 0, 0, 0, 1, 0},
	{ 1, 0, 0, 1, 0, 0, 1, 1, 1, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 1, 0},
	{ 0, 1, 0, 0, 0, 0, 1, 0, 1, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
	{ 0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
	{ 0, 0, 1, 1, 1, 1, 1, 0, 1, 0},
	{ 0, 0, 2, 0, 0, 0, 0, 0, 0, 0}
	};
	int maze3[15][20] =
	{
	{ 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
	{ 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
	{ 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0},
	{ 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0},
	{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{ 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0},
	{ 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0},
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 0}
	};
	int maze4[20][20] = 
	{
	{ 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
	{ 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
	{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
	{ 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
	{ 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0},
	{ 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
	};
	
	bool beatMaze;
	bool startgame = true;
	bool correctsize = false; 
	string startinput;
	string mazeSize;
	string userinput;
	int x = 0;
	int y = 0;
	
	//intro of game
	cout << "Welcome to Maze Escape!" << endl;
	cout << "Type start if you wish to start the game." << endl;
	cout << "Type quit if you wish to leave the game." << endl;
	while (startinput != "start" || startinput != "Start" || startinput != "quit" || startinput != "q" || startinput != "Quit" || startinput != "Q")
	{
		cin >> startinput;
		if (startinput == "start" || startinput == "Start")
		{
			cout << "Welcome to Maze Escape!" << endl;
			cout << "Once upon a time their was a kingdom in peril of being destroyed by a great evil." << endl;
			cout << "The only way to destroy this evil was with a legendary bow located at the end of this maze." << endl;
			cout << "It is now up to the hero to traverse through the maze and save the kingdom from destruction." << endl;
			break;
		}
		else if (startinput == "quit" || startinput == "q" || startinput == "Q" || startinput == "Quit")
		{
			bool beatMaze = true; //have not started the game yet so the lose message does not need to appear
			Quit(startinput, beatMaze);
			break;
		}
		else
		{
			cout << "That was not a valid input, please try again." << endl;
		}
	}

	beatMaze = false;

	if (startgame == true)
	{
		Help();
		cout << "Choose a maze size type A for a 5x5 maze, B for a 10x10 maze, C for a 15x15 maze, and D for a 20x20 maze." << endl;

		while (correctsize == false)
		{
			cin >> mazeSize;
			if (mazeSize == "A" || mazeSize == "a" || mazeSize == "B" || mazeSize == "b" || mazeSize == "C" || mazeSize == "c" || mazeSize == "D" || mazeSize == "d")
			{
				correctsize = true;
			}
			else
			{
				cout << "Invalid input, please try again." << endl;
			}
		}
		if (mazeSize == "A" || mazeSize == "a" || mazeSize == "B" || mazeSize == "b" || mazeSize == "C" || mazeSize == "c" || mazeSize == "D" || mazeSize == "d")
		{
			while (beatMaze == false)
			{
				cout << "Enter an action" << endl;
				cin >> userinput;
				if (userinput == "N" || userinput == "n" || userinput == "S" || userinput == "s" || userinput == "E" || userinput == "e" || userinput == "W" || userinput == "w")
				{
					if (userinput == "N" || userinput == "n")
					{
						x = North(x, y, maze1);
						cout << x << endl;
					}
					if (userinput == "S" || userinput == "s")
					{
						x = South(x, y, maze1);
						cout << x << endl;
					}
					if (userinput == "E" || userinput == "e")
					{
						y = East(x, y, maze1);
						cout << y << endl;
					}
					if (userinput == "W" || userinput == "w")
					{
						y = West(x, y, maze1);
						cout << y << endl;
					}
				}
				if (userinput == "I" || userinput == "i")
				{

				}
				if (userinput == "G" || userinput == "g")
				{

				}
				if (userinput == "F" || userinput == "f")
				{

				}
				if (userinput == "E" || userinput == "e")
				{

				}
				if (userinput == "H" || userinput == "h")
				{
					Help();
				}
				if (userinput == "Quit" || userinput == "quit" || userinput == "Q" || userinput == "q")
				{
					break;
				}
			}
			
		}
	}
	if (beatMaze == false)
	{
		cout << "You lose, try again" << endl;
	}
	return 0;
}

