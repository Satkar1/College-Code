#include<stdio.h>
void main()
{
    FILE *pointer;
    char str[10000];
    pointer = fopen("abc.txt", "r");
    if (pointer==NULL)
        printf("File unable to open");
    else
    {
        int count = 0, word = 1, line = 1;
        while(fgets(str, 10000, pointer))
        {
            for(int i=0; str[i]!= '\0'; i++)
            {
                if (str[i]=='\n' || str[i]==32)
                    continue;
                count++;
            }
            for (int i = 0; str[i]!='\0'; i++)
            {
                if (str[i]=='\n')
                    line++;
            }
            for (int i = 0; str[i]!='\0'; i++)
            {
                if (str[i]=='\n' || str[i]==32)
                    word++;
            }

        }
        printf("The no. of Characters: %d\n", count);
        printf("The no. of lines: %d\n", line);
        printf("The no. of words: %d\n", word);
        

    }

}