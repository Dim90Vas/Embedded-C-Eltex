#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int process(char **args) {
  	pid_t pid;
  	int status;
  	pid = fork();
  	if (pid == 0) {
    		execvp(args[0], args);
    		exit(1);
  	} else {
   		wait(&status);
  	}
  	return 1;
}

char **div_token(char *command) {
  	int bufsize = 20; 
  	int position = 0;
  	char **tokens = malloc(bufsize * sizeof(char*));
  	char *token;

  	token = strtok(command, " \t\r\n\a");
  	while (token != NULL) {
    	tokens[position] = token;
    	++position;

    	if (position >= bufsize) {
      		bufsize += 20;
      		tokens = realloc(tokens, bufsize * sizeof(char*));
    	}
    	token = strtok(NULL," \t\r\n\a");
  	}
  	tokens[position] = NULL;
  	return tokens;
}

int main(void) {
	char *command;
	char **args;
	int status;
	do {
	    	printf("->");
		fgets(command,100,stdin);
    		args = div_token(command);
    		status = process(args);
    		if (strcmp(args[0],"exit") == 0) {
      			status=0;
    		}
    		free(args);
  	} while(status);
  return 0;
}
