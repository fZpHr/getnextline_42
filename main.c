
#include <stdio.h>
#include <fcntl.h>
int	main()
{
	int	fdi;
	int	fdo;
	int	fdp;
	char	*line;
	int	i;
	
	fdi = open("42_no_nl", O_RDONLY);
	fdo = open("43_no_nl", O_RDONLY);
	fdp = open("big_line_no_nl", O_RDONLY);
	i = 1;
	while (i < 5)
	{
		line = get_next_line(fdi);
		printf("Ligne1 : %d\n%s\n", i, line);
		free(line);
		line = get_next_line(fdo);
		printf("Ligne2 : %d\n%s\n", i, line);
		free(line);
		line = get_next_line(fdp);
		printf("Ligne3 : %d\n%s\n", i, line);
		free(line);
		i++;
	}
	close(fdi);
	close(fdo);
	close(fdp);
	return (0);
}
