#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer)
{
	if (you == computer)
		return 1;

	if (you == 's' && computer == 'p')
		return 0;

		else if (you == 'p' && computer == 's') 
        return 1;

	if (you == 's' && computer == 'z')
		return 1;

	else if (you == 'z' && computer == 's')
		return 0;

	if (you == 'p' && computer == 'z')
		return 0;

	else if (you == 'z' && computer == 'p')
		return 1;
}


int main()
{
	int n;

	char you, computer, result;

	srand(time(NULL));

	n = rand() % 100;
    
	if (n < 33)

		// s is denoting Stone
		computer = 's';

	else if (n > 33 && n < 66)

		// p is denoting Paper
		computer = 'p';

	// z is denoting Scissor
	else
		computer = 'z';

	printf("\nEnter s for STONE, p for PAPER and z for SCISSOR\n");

	scanf("%c", &you);
	result = game(you, computer);

	if (result == -1) {
		printf("\nGame Draw!\n");
	}
	else if (result == 1) {
		printf("\nWow! You have won the game!\n");
	}
	else { 
		printf("\nOh! You have lost the game!\n");
	}
		printf("\tu choose : %c and Computer choose : %c\n",you, computer);

	return 0;
}
