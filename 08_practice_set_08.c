#include<stdio.h>
int occurence(char st[], char c){
    char *ptr = st;
    int count =0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;   
        }
       ptr++; 
    }
    return count;
}
int main()
{
    char st[] = "Deepak";
    int count = occurence(st, 'e');
    printf("Occurences = %d", count);
    return 0;

}