#include<stdio.h>
#include<string.h>

//Function prototype of maximum element of an array
int maximum(int array[], int n);
//Function prototype of length of string
int stringLength(char myString[]);
//Function prototype for copying string
void stringCopy(char paste[], char copy[]);
//Function prototype for concatenation string
void stringCat(char str1[], char str2[]);//str1 = str1+str2
//Function prototype for reversing string
void stringReverse(char str[]);

int main()
{
    char name[20], myString[20];
    gets(name);

    //Length
    int length = strlen(name);
    printf("String Length : %d\n", length);

    //Copy
    //stringCopy(myString, name);
    strcpy(myString, name);
    printf("String After Copy:\n");
    puts(myString);
    printf("\n");

    //Concatenation
    printf("After Catenation:\n");
    //stringCat(myString, name);
    strcat(myString, name);
    puts(myString);
    printf("\n");
    puts(name);

    //Reverse of String
    stringReverse(myString);
    puts(myString);
    return 0;
}

void stringReverse(char str[])
{
    int length = strlen(str);
    int i;
    for(i=0;i<length/2;i++)
    {
        //Swap
        //i (Forward), n-1-i(Reverse)
        char temp = str[i];
        str[i]=str[length-1-i];
        str[length-1-i] = temp;
    }
}

void stringCat(char str1[], char str2[])
{
    int i,j;
    for(i=0; str1[i]!='\0';i++)
    {

    }
    for(j=0; str2[j]!='\0'; j++,i++)
    {
        str1[i]=str2[j];
    }

    //Special
    str1[i]='\0';
}
void stringCopy(char paste[], char copy[])
{
    int i;
    for(i=0; copy[i]!='\0';i++)
    {
        paste[i]=copy[i];
    }
    paste[i]='\0';
}

int stringLength(char myString[]){
    int length = 0, i;
    for(i=0; myString[i]!= '\0'; i++)
    {
        length++;
    }

    return length;
}
