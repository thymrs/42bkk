#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	if (x <= 0 || y <= 0)
	{
		return;					 
	}
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if	((col == 0 || col == x - 1) && (row == 0 || row == y - 1))
			{
				ft_putchar('o');
			}
			else if ((col != 0 || col != x - 1) && (row == 0 || row == y - 1))
			{
				ft_putchar('-');
			}
			else if ((col == 0 || col == x - 1))
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}