///fgets(line,長度,fin)跳行還會再
#include <stdio.h>
#include <string.h>
#include <map>///std::map<左邊,右邊>
#include <string>///沒有.h
char line[100];
int main()
{
        int T;
        FILE * fin=fopen("input.txt","r");
        fscanf(fin,"%d",&T);///讀檔案
        std::map<std::string,int>table;
        printf("你讀到了T: %d\n",T);
        while (fgets(line,100,fin)){
            line[strlen(line)-1]=0;
            printf("讀到了= %s =\n",line);
            table[line]++;
        }
}

