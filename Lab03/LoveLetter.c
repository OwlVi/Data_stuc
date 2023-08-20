#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char word[101];
    int i=0,n=0;

    fgets(word,101,stdin);
    char temp[strlen(word)];
    word[strcspn(word, "\n")] = '\0';

    while (strstr(word,"apa")||strstr(word,"epe")||strstr(word,"opo")||strstr(word,"ipi")||strstr(word,"upu"))
    {   n=0;
        for ( i = 0; word[i] != '\0'; i++)
        {
            if(word[i] == 'p' && (  (word[i-1] == word[i+1] ) || 
                                    (word[i-1] == word[i+1] ) ||
                                    (word[i-1] == word[i+1] ) ||
                                    (word[i-1] == word[i+1] ) ||
                                    (word[i-1] == word[i+1] ) ))
            {
                i +=2;
            }
            temp[n++] = word[i];
        }
        temp[n] = '\0';
        strcpy(word,temp);
    }

    if(n){
        word[n] = '\0';
        }
    printf("%s",word);
}