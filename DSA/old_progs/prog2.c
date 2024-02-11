#include <stdio.h>
#include <stdlib.h>

void syntax_error(int num) {
  static char *err[] = {"Can not Open File\n ", "Read Error \n",
                        "Write Error\n", "Media Failure\n"};

  printf("%s", err[num]);
}

int main(int argc, char *argv[]) {

  syntax_error(0);
  return EXIT_SUCCESS;
}
