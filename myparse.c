#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char *line){
  char *token;
  char **args = malloc(300);
  int i = 0;
  printf("***** PRINTING SLICED STRING *****\n");
  while ((token = strsep(&line, " ")) != NULL){
    printf("%s\n", token);
    args[i] = token;
    i++;
  }
  return args;
}

int main(int argc, char *argv[]){
  char test[100] = "ls -l -a";
  char **args = parse_args(test);
  printf("***** CALLING COMMAND *****\n");
  execvp(args[0], args);
}
