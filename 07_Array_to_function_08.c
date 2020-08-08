#include<stdio.h>
// we can pass this array using 2 ways 
// 1st way 
// void printArray(int *ptr, int n) {
//     for (int i=0; i<n;i++) {
//         printf("The value of element %d is %d\n", i+1, *(ptr+i));
//     }
// }
// Secound way
void printArray(int ptr[], int n) {
    for (int i=0; i<n;i++) {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555; // yes it will change the value of the because we are pasing the address
}
int main()
{
    int arr[] ={ 1, 2, 3, 5, 6, 75, 4 };
    printArray(arr, 7);
    printf("%d", arr[2]);
    // printArray(arr, 7);
    return 0;

}