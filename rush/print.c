
#include <unistd.h>

void	print_board(int	**board, int	n)
{
	int	row;
	int	column;

	row = 0;
	while (row < n)
	{
		column = 0;
		while(column < n)
		{
			write(1, &board[row][column], 1);
			if (column != n-1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			++column;
		}
		++row;
	}
}
