#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define STRING "#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%c#define STRING %c%s%c%c#define N %c%i%c%c#define NEXT %cSully_%c N %c.c%c%c#define WRITE fprintf(f, STRING, 10, 10, 10, 34, STRING, 34, 10, 34, atoi(N)-1, 34, 10, 34, 34, 34, 34, 10, 10, 34, 34, 10, 10)%c#define FT int main(){FILE *f=fopen(NEXT, %cw%c); WRITE; fclose(f);}%cFT%c"
#define N "5"
#define NEXT "Sully_" N ".c"
#define WRITE fprintf(f, STRING, 10, 10, 10, 34, STRING, 34, 10, 34, atoi(N)-1, 34, 10, 34, 34, 34, 34, 10, 10, 34, 34, 10, 10)
#define CMD "clang -Wall -Wextra -Werror"
#define FT int main(){FILE *f=fopen(NEXT, "w"); WRITE; fclose(f);}
FT
