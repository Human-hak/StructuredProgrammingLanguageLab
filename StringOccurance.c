#include<stdio.h>

int stringOccurance(char sentence[], char word[])
{
    int i,j, occurance=0;
    for(i=0, j=0; sentence[i]!='\0'; i++)
    {
        if(sentence[i]==word[j])
        {
            j++;

            if(word[j]=='\0' && (sentence[i+1]==' ' || sentence[i+1]=='\0') && (i+1==j || sentence[i-j]==' '))
            {
                occurance++;
            }
        }
        else{
            j=0;
        }
    }
}

int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    int result = stringOccurance(str1, str2);
    printf("%d", result);
    return 0;
}
