#include <stdio.h>

int	main(void)
{
	/*
		first comment in main
	*/
	char *str;

	str = "#include <stdio.h>%c%cint%cmain(void)%c{%c%c/*%c%c%cfirst comment in main%c%c*/%c%cchar *str;%c%c%cstr = %c%s%c;%c%cprintf(str, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 9, 10, 10);%c}%c/*%c%csecond comment out of main%c*/%c";
	printf(str, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 9, 10, 10);
}
/*
	second comment out of main
*/
