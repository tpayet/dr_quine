#include <stdio.h>

void fn(void){}
int main(void)
{
	/*
		first comment in main
	*/
	char *str;

	str = "#include <stdio.h>%1$c%1$cvoid fn(void){}%1$cint main(void)%1$c{%1$c%2$c/*%1$c%2$c%2$cfirst comment in main%1$c%2$c*/%1$c%2$cchar *str;%1$c%1$c%2$cstr = %3$c%4$s%3$c;%1$c%2$cfn();%1$c%2$cprintf(str, 10, 9, 34, str);%1$c}%1$c/*%1$c%2$csecond comment out of main%1$c*/%1$c";
	fn();
	printf(str, 10, 9, 34, str);
}
/*
	second comment out of main
*/
