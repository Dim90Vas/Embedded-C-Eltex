#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
	pid_t pr1;
	pid_t pr2;
	pid_t pr3;
	pid_t pr4;
	pid_t pr5;
	int st;
        pr1=fork();
        if(pr1==0) {
                printf("pid pr1 %d,\tppid pr1 %d\n",getpid(),getppid());
		pr3=fork();
		if(pr3==0) {
                	printf("pid pr3 %d,\tppid pr3 %d\n",getpid(),getppid());
			exit(0);
        	} else {
                	if(pr3<0) printf("Error\n");
	        }
		wait(&pr3);
		
		pr4=fork();
                if(pr4==0) {
                        printf("pid pr4 %d,\tppid pr4 %d\n",getpid(),getppid());
                	exit(0);
                } else {
                        if(pr4<0) printf("Error\n");
                }
                wait(&pr4);

                exit(0);
        } else {
                if(pr1<0) printf("Error\n");
   	}
	
	pr2=fork();
	if(pr2==0) {
		printf("pid pr2 %d,\tppid pr2 %d\n",getpid(),getppid());
		
		pr5=fork();
                if(pr5==0) {
                        printf("pid pr5 %d,\tppid pr5 %d\n",getpid(),getppid());
                	exit(0);
                } else {
                        if(pr5<0) printf("Error\n");
                }
                wait(&pr5);

                exit(0);
	} else {
		if(pr2<0) printf("Error\n");
	}
	wait(&pr1);
	wait(&pr2);
return 0;
}
