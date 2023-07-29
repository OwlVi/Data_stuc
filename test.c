#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    char ans[101];
    char temp[101];
    int c = 0;
    int i;

    fgets(word, 101, stdin);
    word[strcspn(word, "\n")] = '\0';

    for (int i = 0; word[i] != '\0'; i++)
    {
        if((word[i] == ' ') && (i == 0)){
            i ++;
        }if (word[i + 1] == 'p' && ((word[i] == 'a' && word[i + 2] == 'a') || 
                                    (word[i] == 'e' && word[i + 2] == 'e') ||
                                    (word[i] == 'i' && word[i + 2] == 'i') || 
                                    (word[i] == 'o' && word[i + 2] == 'o') ||
                                    (word[i] == 'u' && word[i + 2] == 'u') ) )
        {
            i += 2;
        }
        temp[c++] = word[i];
    }
    temp[c] = '\0';
    c = 0;
    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i + 1] == 'p' &&  ((word[i] == 'a' && word[i + 2] == 'a') || 
                                    (word[i] == 'e' && word[i + 2] == 'e') ||
                                    (word[i] == 'i' && word[i + 2] == 'i') || 
                                    (word[i] == 'o' && word[i + 2] == 'o') ||
                                    (word[i] == 'u' && word[i + 2] == 'u'))  )
        {
            i += 2;
        }
        ans[c++] = temp[i];
    }

    ans[c] = '\0';
    printf("%s", ans);

    return 0;
}