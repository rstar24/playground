#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
  char ch;
  printf("Enter some text (type a period to quit)\n");
  do {
    ch = getche();

    if (islower(ch)) ch = toupper(ch);

    else ch = tolower(ch);

    putchar(ch);

  } while(ch != '.');


  return EXIT_SUCCESS;
}
