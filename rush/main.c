int	**creat_board(unsigned int	n);
void	print_board(int	**board, int	n);

int	main(void)
{
	int	**board = creat_board(4);
	print_board(board, 4);
}
