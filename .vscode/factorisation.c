#include <stdio.h>
#define SIZE 100
int main(void)
{
char str[SIZE], ch;
int p, i = 0, j;
printf("Enter a string: ");
scanf("%99s", str);
printf("Character to add : ");
scanf(" %c", &ch); /* space before %c skips the Enter key */
printf("How many times : ");
scanf("%d", &p);
while (str[i] != '\0') /* i stops ON the old end character */
i++;


}
for (j = 0; j < p; j++) {
str[i] = ch; /* old '\0' gets overwritten */
i++;
}
str[i] = '\0'; /* put the end character back */
printf("New string: %s\n", str);
return 0;
}