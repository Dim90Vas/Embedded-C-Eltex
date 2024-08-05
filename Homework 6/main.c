#include "header.h"

int main(void) {
    struct abonent *people = (struct abonent *)malloc(1*sizeof(struct abonent));
    int action;
    char x=1;
    char count=1;
    for(int i=0;i<100;++i) {
        (people+i)->name[0]=0;
    }
    while(x==1) {
        printf("1. Add a subscriber\n2. Delete a subscriber\n3. Find a subscriber\n4. Show all\n5. Close\n");
        scanf("%d",&action);
        switch(action) {
            case 1:
                people=add_ab(people,count);
                ++count;
                break;
            case 2:
                del_ab(people,count);
                /*printf("%d\n",p);
                int m=0;
                while(m<count) {
                    for(int i=0;i<count;++i) {
                        if(m==p) {
                            (people+m)->name[i]=0;
                        }
                    }   
                    ++m;
                }*/
                break;
            case 3:
                static int mass[10];
                find_ab(people,mass,count);
                int i=0;
                do {
                    printf("%s\n",(people+mass[i])->name);
                    ++i; 
                } while(i<10&&mass[i]!=0);
                for(int i=0;i<10;++i) {
                   mass[i]=0;
                }
                break;
            case 4:
                all_enter(people,count);
                break;
            case 5:
                x=2;
                break;
            }
    }
    free(people);
    return 0;
}

