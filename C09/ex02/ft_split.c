#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx])
	{
		if (c == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	idx;
	int	in_word;
	int	count;

	idx = 0;
	in_word = 0;
	count = 0;
	while (str[idx])
	{
		if (!is_sep(str[idx], charset))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		idx++;
	}
	return (count);
}

char	*word_dup(char *start, int len)
{
	char	*word;
	int		idx_word;

	word = malloc(sizeof(char) * (len + 1));
	idx_word = 0;
	if (!word)
		return (NULL);
	while (idx_word < len)
	{
		word[idx_word] = start[idx_word];
		idx_word++;
	}
	word[idx_word] = '\0';
	return (word);
}

int	extract_word(char **res, int idx_arr, char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !is_sep(str[len], charset))
		len++;
	res[idx_arr] = word_dup(str, len);
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		idx_str;
	int		idx_arr;
	int		word_count;

	idx_str = 0;
	idx_arr = 0;
	word_count = count_words(str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (str[idx_str])
	{
		if (!is_sep(str[idx_str], charset))
		{
			idx_str += extract_word(result, idx_arr, &str[idx_str], charset);
			idx_arr++;
		}
		else
			idx_str++;
	}
	result[idx_arr] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*text;
// 	char	*charset;
// 	char	**words;
// 	int		i;

// 	text = "Hello|world,test split!";
// 	charset = " ,|!";
// 	words = ft_split(text, charset);
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("Word %d: %s\n", i, words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// 	return (0);
// }