#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i,j=0;
    char string[50];
    char string_invertida[50];
    gets(0);
    scanf("%s",string);
    for (i = strlen(string)-1; i >= 0; i--,j++)
    {
        string_invertida[j] = string[i];
    }
    string_invertida[j] = '\0';

    printf("string normal:%s\n",string);
    printf("string invertida:%s\n",string_invertida);

    return 0;
}
