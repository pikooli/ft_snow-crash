#include <string.h>
#include <stdio.h>

int	main(int ac, char **av) {
	int i = -1;

	if (ac != 2)
		return (0);
	while(++i < strlen(av[1]))
		av[1][i]-= i;
	puts(av[1]);
	return (0);
}