#ifndef HEADER
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct abonent {
    char name[10];
    char second_name[10];
    char tel[10];
};

struct abonent * add_ab(struct abonent *,char count);
struct abonent * del_ab(struct abonent *,char count);
int *find_ab(struct abonent *,int *,char count);
void all_enter(struct abonent *,char count);
#endif
