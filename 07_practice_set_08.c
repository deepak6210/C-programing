#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
       mulTable[i] = num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }

    printf("\n***************************************\n\n");
}
int main()
{    
    int m,n,t;
    printf("Enter the number of table you want to print\n");
    scanf("%d", &m);
    printf("Enter Upto which number you want to print the table\n");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        int mulTable[m][n];
         printf("Enter the number of which you needed the table\n");
         scanf("%d", &t);
         printTable(mulTable[i], t, n);  
    }
    return 0;
}