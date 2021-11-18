#include <stdio.h>
#include <stdlib.h>

void myCopyFn(char arr[]);

int main()
{
    char arr[5];
    printf("Please, enter the string:\n");
    scanf("%s",arr);
    myCopyFn(arr);

    return 0;
}

void myCopyFn(char arr[])
{
    char arr2[5];
    int i;

    for(i=0;i<5;i++)
    {
        arr2[i] = arr[i];
    }

    for(i=0;i<5;i++)
    {
        printf("%c",arr2[i]);
    }

    //printf("%s",arr2);
}
