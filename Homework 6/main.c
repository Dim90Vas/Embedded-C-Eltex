#include "header.h"

int main(void) {
    int action;
    char x=1;
    char count=1;
    struct abonent *people = (struct abonent *)malloc(count*sizeof(struct abonent));
    memset(people,0,count*sizeof(struct abonent));

    while(x==1) {
        printf("1. Add a subscriber\n2. Delete a subscriber\n3. Find a subscriber\n4. Show all\n5. Close\n");
        scanf("%d",&action);
        switch(action) {
            case 1:
                people=add_ab(people,count);
                ++count;
                break;
            case 2:
                people=del_ab(people,count);
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

