#include <iostream>
#include<windows.h>

using namespace std;

// Global Varibales
char board[3][3] = {{'1', '2' , '3'}, {'4', '5' , '6'}, {'7', '8' , '9'}};
char turn = 'X';
int row, column;
bool isComputer, isDraw, showResults;
string playerName1, playerName2;

// Methods Starts Here
void mainHeading()
{
	cout << endl << endl;
	// Logical Desgin: Printing Tab Space and Equal Sign Using Loops
	for(int i = 1; i <= 5; i++)
	{
		cout << "\t";
	}
	for(int i = 1; i <= 67; i++)
	{
		cout << "=";	
	}
	cout << endl;
	for(int i = 1; i <= 5; i++)
	{
		cout << "\t";
	}
	cout << "|                  T i c   T a c   T o e   G a m e                 |" << endl;
	for(int i = 1; i <= 5; i++)
	{
		cout << "\t";
	}
	cout << "|                                                                  |" << endl;
	for(int i = 1; i <= 5; i++)
	{
		cout << "\t";
	}
	cout << "| Developed By :  RAJA JAVED, Arshan Ali & Zubair Karim  (BSCS-1)  |" << endl;
	for(int i = 1; i <= 5; i++)
	{
		cout << "\t";
	}
	for(int i = 1; i <= 67; i++)
	{
		cout << "=";	
	}
	cout << endl;
}

void computerHeading()
{
	system("cls");
	mainHeading();
	cout << endl;
	for(int i = 1; i <= 7; i++)
	{
		cout << "\t";
	}
	cout << " C o m p u t e r  M o d e" << endl;
}

void playerHeading()
{
	system("cls");
	mainHeading();
	cout << endl;
	for(int i = 1; i <= 7; i++)
	{
		cout << "\t";
	}
	cout << " T w o  P l a y e r  M o d e" << endl;
}

void displayBoard()
{
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t       |       |       " << endl;
	cout << "\t\t\t\t\t\t\t   " << board[0][0] << "   |   " << board[0][1] << "   |   " << board[0][2] << "   " << endl;
	cout << "\t\t\t\t\t\t\t ______|_______|_______" << endl;
	cout << "\t\t\t\t\t\t\t       |       |       " << endl;
	cout << "\t\t\t\t\t\t\t   " << board[1][0] << "   |   " << board[1][1] << "   |   " << board[1][2] << "   " << endl;
	cout << "\t\t\t\t\t\t\t ______|_______|_______" << endl;
	cout << "\t\t\t\t\t\t\t       |       |       " << endl;
	cout << "\t\t\t\t\t\t\t   " << board[2][0] << "   |   " << board[2][1] << "   |   " << board[2][2] << "   " << endl;
	cout << "\t\t\t\t\t\t\t       |       |       " << endl;
}

void playerTurn()
{
	int choice;
	
	if(isComputer == true)
	{
		if(turn == 'X')
		{
			cout << "\t Computer [X] Turn: ";
		}
		else if(turn == 'O')
		{
			cout << "\t " << playerName2 << " [O] Turn: ";
		}
	}
	else if(isComputer == false)
	{
		if(turn == 'X')
		{
			cout << "\t " << playerName1 << " [X] Turn: ";
		}
		else if(turn == 'O')
		{
			cout << "\t " << playerName2 << " [O] Turn: ";
		}
	}
	
	if(isComputer == true)
	{
		if(turn == 'X' && board[0][2] != 'X' && board[0][2] != 'O')
		{
			choice = 3;
			Sleep(3000);
		}
		else if(turn == 'X' && board[1][1] != 'X' && board[1][1] != 'O')
		{
			choice = 5;
			Sleep(3000);
		}
		else if(turn == 'X' && board[1][0] != 'X' && board[1][0] != 'O')
		{
			choice = 4;
			Sleep(3000);
		}
		else if(turn == 'X' && board[0][1] != 'X' && board[0][1] != 'O')
		{
			choice = 2;
			Sleep(3000);
		}
		else if(turn == 'X' && board[0][0] != 'X' && board[0][0] != 'O')
		{
			choice = 1;
			Sleep(3000);
		}
		else if(turn == 'X' && board[2][1] != 'X' && board[2][1] != 'O')
		{	
			choice = 8;
		Sleep(3000);	
		}
		else if(turn == 'X' && board[2][0] != 'X' && board[2][0] != 'O')
		{
			choice = 7;
			Sleep(3000);
		}
		else if(turn == 'X' && board[1][2] != 'X' && board[1][2] != 'O')
		{
			choice = 6;
			Sleep(3000);	
		}
		else if(turn == 'X' && board[2][2] != 'X' && board[2][2] != 'O')
		{
			choice = 9;
			Sleep(3000);	
		}
		else
		{
			cin >> choice;
		}
	}
	else
	{
		cin >> choice;
	}
	
	switch(choice)
	{
		case 1:
			row = 0;
			column = 0;
			break;
		case 2:
			row = 0;
			column = 1;
			break;
		case 3:
			row = 0;
			column = 2;
			break;
		case 4:
			row = 1;
			column = 0;
			break;
		case 5:
			row = 1;
			column = 1;
			break;
		case 6:
			row = 1;
			column = 2;
			break;
		case 7:
			row = 2;
			column = 0;
			break;
		case 8:
			row = 2;
			column = 1;
			break;
		case 9:
			row = 2;
			column = 2;
			break;							
		default:
			cout << "\t Invalid Choice. Try Again." << endl;
			playerTurn();
			break;									
	}
	
	if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
	//	system("Color 60");
		board[row][column] = 'X';
		turn = 'O';
		displayBoard();
	}
	else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
	{
	//	system("Color 70");
		board[row][column] = 'O';
		turn = 'X';
		displayBoard();
	}
	else
	{
		cout << "\t Box Is Already Filled. Please Try Again.";
		playerTurn();
	}
}

bool gameOver()
{
	showResults = true;
	// Check Win
	for(int i = 0; i < 3; i++)
	{
		if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]) 
		{
			 return false;
		}
	}
	
	if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
	{
		return false;	
	}	
	// If there is any box not filled
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(board[i][j] != 'X' && board[i][j] != 'O')
			{
				return true;
			}
		}
	}
	
	// Game Draw (No One Wins)
	isDraw = true;
	return false;	
}			

int main()
{
	int choice;
	
	do
	{
		isComputer = false;
		showResults = false;
		
		system("cls");
		mainHeading();
		cout << endl << endl;
		cout << "\t 1. Play With Computer." << endl;
		cout << "\t 2. Play With Other Player." << endl;
		cout << "\t 3. Exit Game." << endl << endl;

		cout << "\t Enter Your Choice: ";
		cin >> choice;
	
		cout << endl;
	
		if(choice == 1)
		{
			isComputer = true;
		
			getline(cin, playerName2);
			cout << "\t Enter Your Name: ";
			getline(cin, playerName2);
	
			while(gameOver())
			{
				computerHeading();
				displayBoard();
				playerTurn();
				gameOver();
			}
		}			
		else if(choice == 2)
		{
			getline(cin, playerName1);
			cout << "\t Enter Player 1 Name: ";
			getline(cin, playerName1);
		
			cout << "\t Enter Player 2 Name: ";
			getline(cin, playerName2);
		
			while(gameOver())
			{
				playerHeading();
				displayBoard();
				playerTurn();	
				gameOver();
			}	
		}
		else if(choice == 3)
		{
			cout << "\t Sorry To See You Go. #GoodBye" << endl;
		}
		else
		{
			cout << "\t Invalid Choice. Try Again." << endl;
		}
	
		if(showResults == true)
		{
			if(turn == 'X' && isDraw == false)
			{
				system("cls");
				mainHeading();
				playerHeading();
				displayBoard();
				cout << "\t " << playerName2 << " [O] Wins. Congratulations" << endl;
				system("pause");
				showResults = false;
			}
			else if (turn == 'O' && isDraw == false)
			{
				system("cls");
				mainHeading();
				playerHeading();
				displayBoard();
		
				if(isComputer == true)
				{
					cout << "\t Computer [X] Wins." << endl;
					system("pause");
					showResults = false;
				}
				else
				{
					cout << "\t " << playerName1 << " [X] Wins. Congratulations" << endl;
					system("pause");
					showResults = false;
				}
			}
			else
			{				
				cout << "\t Game Draw. No One Wins. Play Again." << endl;
				system("pause");
				showResults = false;
			}
			
			board[0][0] = '1';
			board[0][1] = '2';
			board[0][2] = '3';
			
			board[1][0] = '4';
			board[1][1] = '5';
			board[1][2] = '6';
			
			board[2][0] = '7';
			board[2][1] = '8';
			board[2][2] = '9';
		}
	} while(choice != 3);
 
	return 0;
}

