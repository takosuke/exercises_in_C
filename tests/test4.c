#include <stdio.h>
char strA[80] = "my tailor is rich banana";
char strB[80];
char *my_strcopy(char *destination, char *source)
{
	char *p = destination;
	while (*source != '\0')
	{
		*p++ = ++(*source++);
	}
	*p = '\0';
	return destination;
}

int main()
{
	my_strcopy(strB, strA);
	puts(strB);
	return 0;
}


