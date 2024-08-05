#include "header.h"

struct abonent* add_ab(struct abonent *arr,char count) {
    arr=realloc(arr,(count*sizeof(struct abonent)));
    for(int i=0;i<count;++i) {   
        if((arr+i)->name[0]==0) {
            printf("Enter name: ");
            scanf("%s",(arr+i)->name);
            
            break;
        }
    }
    return arr;
}
/*
int del_ab(struct abonent *arr,char count) {
    char del_name[10];
    int index;
    int i=0;
    printf("Delete name: ");
    scanf("%s",del_name);
    while(i<count) {
        for(int j=0;j<10;++j) {
            if(strlen(del_name)==strlen((arr+i)->name)) {
                if(del_name[j]==((arr+i)->name)[j]&&((arr+i)->name)[j]!=0) {
                    if(strlen(del_name)==j+1) {
                        index=i;
                        --count;
                        return index;
                    }
                }
            }
        }
        ++i;
    }
}*/

struct abonent* del_ab(struct abonent *arr,char count) {
	char del_name[10];
	int i=0,k=0;
	int index;
    	printf("Delete name: ");
    	scanf("%s",del_name);
    	while(i<count) {
		if(strcmp((arr+i)->name,del_name)==0) {
			index=i;
			break;
		}
        	++i;
    	}
    	--count;
    	struct abonent *new_arr=realloc(arr,(count*sizeof(struct abonent)));
    	for(int j=0;j<count;++j,++k) {
    		strcpy((new_arr+j)->name,(arr+k)->name);
    		if(j==index) {
    			++k;
    			strcpy((new_arr+j)->name,(arr+k)->name);			
    		}

    	}
    	return new_arr;
}


int* find_ab(struct abonent *arr,int *mass,char count) {
    char find_name[10];
    int index=0;
    int i=0;
    printf("Find name: ");
    scanf("%s",find_name);
    while(i<count) {
        for(int j=0;j<10;++j) {
            if(strlen(find_name)==strlen((arr+i)->name)) {
                if(find_name[j]==((arr+i)->name)[j]&&((arr+i)->name)[j]!=0) {
                    if(strlen(find_name)==j+1) {
                    mass[index]=i;
                    ++index;
                    }
                }
            }
        }
        ++i;
    }
    return mass;
}

void all_enter(struct abonent *arr,char count) {
    for(int i=0;i<count;++i) {
        printf("%s\n",(arr+i)->name);
    }
}
