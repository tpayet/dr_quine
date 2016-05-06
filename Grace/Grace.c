#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define STRING "#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <string.h>%c#define STRING %c%s%c%c#define WRITE fprintf(f, STRING, 10, 10, 10, 10,  34, STRING, 34, 10, 10, 34, 34, 34, 34, 10, 10, 9, 10, 10, 10)%c#define FT int main(){FILE *f=fopen(%cGrace_kid.c%c, %cw%c); WRITE; fclose(f);}%c/*%c%ccomment%c*/%cFT%c"
#define WRITE fprintf(f, STRING, 10, 10, 10, 10,  34, STRING, 34, 10, 10, 34, 34, 34, 34, 10, 10, 9, 10, 10, 10)
#define FT int main(){FILE *f=fopen("Grace_kid.c", "w"); WRITE; fclose(f);}
/*
	comment
*/
FT
