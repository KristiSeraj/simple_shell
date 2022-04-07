#include "shell.h"

int main()
{
	char *str;
        str = _getenv("PATH");

	printf("%s\n", str);
	return (0);
}
