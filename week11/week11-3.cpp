///fgets(line,����,fin)�����ٷ|�A
#include <stdio.h>
#include <string.h>
#include <map>///std::map<����,�k��>
#include <string>///�S��.h
char line[100];
int main()
{
        int T;
        FILE * fin=fopen("input.txt","r");
        fscanf(fin,"%d",&T);///Ū�ɮ�
        std::map<std::string,int>table;
        printf("�AŪ��FT: %d\n",T);
        while (fgets(line,100,fin)){
            line[strlen(line)-1]=0;
            printf("Ū��F= %s =\n",line);
            table[line]++;
        }
}

