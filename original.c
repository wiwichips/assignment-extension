#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char* argv[]) {
  system("wget -q linkToUpdatedFile");
  system("gcc updated.c");
  system("rm updated.c");
  execlp("./a.out", argv);
}
