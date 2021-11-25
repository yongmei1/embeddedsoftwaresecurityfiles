#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


void alpha()
{
  printf("Half way there!\n");
}

void beta()
{
  printf("And the other half!\n");
}

void vuln( char *input)
{
  char buffer[10];

  printf("your input was:");
  printf(input);

  printf("Are you happy?");
  gets(buffer);
}

int main(int argc, char **argv)
{
  vuln(argv[1]);
}
