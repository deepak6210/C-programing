#include<stdio.h>
void presence(char st[], char c) {
    char *ptr = st;
    int count =0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
            break;
        }
        ptr++;
    }
    if (count==1)
    {
        printf("Yes the character is present in the string");
    }
    else
    {
        printf("no the character is present in the string");
    }
}
int main()
{
    char st[] = "Deepak";
    presence(st, 'e');
    return 0;

}