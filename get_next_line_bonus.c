
#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1] = "\0";
	char		*line;
	int		bytes;

	bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 )
		return (NULL);
	line = ft_strdup(buff);
	if (!line)
		return (NULL);
	while (bytes && ft_checkline(line) == 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes < 0)
			return (free(line), NULL);
		buff[bytes] = 0;
		line = ft_strjoin(line, buff);
		if (line == NULL)
			return (NULL);
	}
	ft_nextline(buff);
	if (line[0] == 0)
		return (free(line), NULL);
	return (line);
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main()
{
	int	fd;
	char	*line;
	int	i;
	
	fd = open("42_no_nl", O_RDONLY);
	i = 1;
	while (i < 4)
	{
		line = get_next_line(fd);
		printf("Ligne : %d\n%s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}*/
