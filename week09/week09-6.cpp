#include <stdio.h>
#include <string.h>
char strA[]="XYZ";
char strB[]="ABCD";
int main()
{
    int c=strcmp("B","C");
    printf(" B - C �o�� %d\n",c);
    c=strcmp(strA,strB);
    printf("%s %s �o�� %d\n",strA,strB,c);
}
