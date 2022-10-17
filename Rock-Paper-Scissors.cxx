#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int pickrandom(int n)
{
srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
	return rand() % n;
}
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
	int i, j, k, m = 0, n = 0;
	char name[20];
	char choise[3][9] = {{"rock"}, {"scissors"}, {"paper"}};
	printf("\nEnter your name : ");
	gets(name);
	for (i = 0; i < 3; i++)
	{
		printf("\nEnter 0 for rock \nEnter 1 for scissors \nEnter 2 for paper\n");
		scanf("%d", &j);
		k = pickrandom(3);
		if (k == 0 && j == 1)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\ncomputer won");
			m++;
		}
		if (k == 0 && j == 2)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\nyou won");
			n++;
		}
		if (k == 1 && j == 2)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\ncomputer won");
			m++;
		}
		if (k == 1 && j == 0)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\nyou won");
			n++;
		}
		if (k == 2 && j == 0)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\ncomputer won");
			m++;
		}
		if (k == 2 && j == 1)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\nyou won");
			n++;
		}
		if (k == j)
		{
			printf("\nComputer : %s", choise[k]);
			printf("\n%s : %s", name, choise[j]);
			printf("\nDraw");
		}
	}
	printf("\nyor point : %d", n);
	printf("\ncomputers point : %d", m);
	if (m < n)
	{
		printf("\nYou won");
	}
	else if (n < m)
	{
		printf("\ncomputer won");
	}
	else
	{
		printf("\nDraw");
	}
	return 0;
}
