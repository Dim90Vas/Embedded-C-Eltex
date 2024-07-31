#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

void main(void) {
	pid_t pid;
	int st;
	printf("Process 1, pid=%d\n",getpid());
	pid=fork();
	if(pid==0) {
		printf("Process 2, pid=%d\n",getpid());
		printf("Process 2: end\n");
	} else {
		if(pid<0) printf("Cann't create process 2: error %d\n",pid);
		wait(&st);
		printf("Status = %d\n",WEXITSTATUS(st));
		printf("Process 1: end\n");
	}
	//exit(0);
}
