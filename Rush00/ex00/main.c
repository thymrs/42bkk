#include <unistd.h>
#include <stdio.h>
void	rush(int x, int y);
void	ft_putchar(char a);

int	main()
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(0, 4);
	ft_putchar('\n');
	return (0);
}