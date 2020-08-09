#include<stdio.h>
void countP(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
        // else
        // {
        //     continue;
        // }
        
    }
    printf("The number of positive integer in array = %d", count);

}
int main()
{
    int arr[] ={ 1, 4, 77, -45, -66, 2, 6, -7, 3, -4 };
    countP(arr, 10);

    return 0;

}