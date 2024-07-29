#include <stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

int main(void) {
	int var=0;
	int a, b;
	while(var!=5) {
		printf("1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\n");	
		scanf("%d",&var);
		

		switch(var) {
		case 1:
			printf("Enter first number: ");
	                scanf("%d",&a);
        	        printf("Enter second number: ");
               		scanf("%d",&b);

			//printf("%d\n",a+b);//
			add(a,b);
		break;
		case 2:
			printf("Enter first number: ");
	                scanf("%d",&a);
	                printf("Enter second number: ");
	                scanf("%d",&b);

			//printf("%d\n",a-b);//
			sub(a,b);
		break;
		case 3:
			printf("Enter first number: ");
                	scanf("%d",&a);
                	printf("Enter second number: ");
                	scanf("%d",&b);

			//printf("%d\n",a*b);//
			mul(a,b);
		break;
		case 4:
			printf("Enter first number: ");
                	scanf("%d",&a);
                	printf("Enter second number: ");
                	scanf("%d",&b);

			//printf("%d\n",a/b);//
			div(a,b);
		break;
		}
	}
	
	return 0;
}
