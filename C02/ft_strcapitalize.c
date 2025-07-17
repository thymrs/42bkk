#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*head;

	head = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	++str; // reminder ==> moves the pointer to the next character!
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
				&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')
						&& *str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (head);
}

int main(void)
{
    char str1[] = "hELLo wOrld! tHis iS 42SChool.";

    printf("Original: %s\n", str1);
    printf("Capitalized: %s\n\n", ft_strcapitalize(str1));
    return 0;
}
