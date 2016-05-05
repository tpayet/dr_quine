#include <stdio.h>

int	main(void)
{
	char *str;

	str = "#include <stdio.h>%c%cint%cmain(void)%c{%c%cchar *str;%c%c%cstr = %c%s%c;%c%cprintf(str, 10, 10, 9, 10, 10, 9, 10, 10, 9, 34, str, 34, 10, 9, 10, 10);%c}%c";
	printf(str, 10, 10, 9, 10, 10, 9, 10, 10, 9, 34, str, 34, 10, 9, 10, 10);
}
