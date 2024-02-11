#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int disp, count;
  if (argc<2){
    printf("You must enter the length of the count\n");
    printf("On the command line. Try again\n");
    exit(1);

  }
  if (argc==3 && !strcmp(argv[2], "display"))
    disp = 1;
  else disp = 0;

  for(count = atoi(argv[1]); count ; --count)
    if (disp) printf("%d\n",count);
 // putchar("\a\n"); /*THis should ring a bell*/
  printf("Done\n");

  return EXIT_SUCCESS;
}
