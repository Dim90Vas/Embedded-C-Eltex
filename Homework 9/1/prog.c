#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *f_op;
	char buf[17];
	f_op=fopen("output.txt","wt");
	
	fprintf(f_op,"String from file");
	fclose(f_op);
	
	FILE *f_re;
	f_re=fopen("output.txt","r");
	if(f_re==NULL) {
		printf("No file");
		return 1;
	}	
	
	fgets(buf,sizeof(buf),f_re);
	for(int i=sizeof(buf);i>=0;--i) {
		if(buf[i]>='\0')
			printf("%c",buf[i]);
	}
	printf("\n");
	fclose(f_re);
	return 0;
}
