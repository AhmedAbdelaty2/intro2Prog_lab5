#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char first[5][10],last[5][10],full[5][21];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Please, enter the first name of user number %d: ",i+1);
        scanf("%s",first[i]);
        printf("Please, enter the last name of user number %d: ",i+1);
        scanf("%s",last[i]);
    }


    for(i=0;i<5;i++)
    {
        strcpy(full[i],first[i]);
        strcat(full[i]," ");
        strcat(full[i],last[i]);
        printf("%s\n",full[i]);
    }


    return 0;
}
