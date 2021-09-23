#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
#define SWAP(x, y, t)((t) = (x), (x) = (y), (y) = (t))
void sort(int [], int); /* 選擇排序 */
int main(void)
{
    int i, n;
    int list[MAX_SIZE];
    printf("Enter the number of numbers to generate: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX_SIZE){
        fprintf(stderr, "Improper value of n\n");
    }
    for (i = 0; i < n; i++)             /* 隨機產生數值 */
    {
        list[i] = rand() % 1000;
        printf("%d ",list[i]);
    }
    sort(list, n);
    printf("\n Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
    return(0);
}
void sort(int list[], int n){
    int i, j, min, temp;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if(list[j] < list[min]){
                min = j;
            }
        }
        SWAP(list[i], list[min], temp);
    }
    
}