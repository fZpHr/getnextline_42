#include "get_next_line_bonus.h"

void	ft_nextline(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\n' && str[i] != 0)
		i++;
	if (str[i] == '\n')
		i++;
	j = 0;
	while (str[i + j])
	{
		str[j] = str[i + j];
		j++;
	}
	str[j] = 0;
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_checkline(char *str)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *s)
{
	char	*dest;
	int		l;
	int		i;

	i = 0;
	l = 0;
	while (s[l] != '\n' && s[l] != 0)
		l++;
	if (s[l] == '\n')
		l++;
	dest = malloc(sizeof(char) * (l + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t		i;
	size_t		j;
	size_t		l;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l = 0;
	j = 0;
	while (s2[l] != '\n' && s2[l] != 0)
		l++;
	if (s2[l] == '\n')
		l++;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + l + 1));
	if (!ptr)
		return (free(s1),NULL);
	while (s1 && s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2 && j < l)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	free(s1);
	return (ptr);
}
