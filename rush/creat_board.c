#include <stdlib.h>

int	**creat_board(unsigned int	n)
{
	int **board;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	board = (int **)malloc(sizeof(int *) * n);
	while (i < n)
	{
		board[i] = (int *)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			board[i][j] = 97;
			++j;
		}
		++i;
	}
	return (board);
}
