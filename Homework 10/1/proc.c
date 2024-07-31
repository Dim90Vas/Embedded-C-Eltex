#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

void main(void) {
	int pid2, st;
	printf("Process 1, pid=%d\n",getpid());
	pid2=fork();
	if(pid2==0) {
		printf("Process 2, pid=%d\n",getpid());
		printf("Process 2: end\n");
	} else {
		if(pid2<0) printf("Cann't create process 2: error %d\n",pid2);
		wait(&st);
		printf("Status = %d\n",WEXITSTATUS(st));
		printf("Process 1: end\n");
	}
	//exit(0);
}
