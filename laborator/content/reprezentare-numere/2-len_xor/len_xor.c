#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	/* TODO */
	(void) str;

	return -1;
}

void equality_check(const char *str)
{
	/* TODO */
	(void) str;
}

int main(void)
{
	/* TODO: Test functions */
	char str[20] = "test";

	printf("str = %s, len(%s) = %d\n", str, str, my_strlen(str));

	return 0;
}

