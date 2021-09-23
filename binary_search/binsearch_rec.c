#include <stdio.h>
#include <stdlib.h>
#define COMPARE(x, y) x < y ? -1 : ( x == y ? 0 : 1 )
int binsearch_rec(int [], int, int, int);
int main(void)
{
   int data[10] = {1,2,3,4,5,6,7,8,9,10};
   int res = binsearch_rec(data, 5, 0, 9);
   printf("%d", res);

}

int binsearch_rec(int list[], int searchnum, int left, int right){
    int middle;
    if(left <= right){
        middle = (left + right)/2;
        switch (COMPARE(list[middle], searchnum)) {
            case -1: return binsearch_rec(list, searchnum, middle+1, right);
            case 0: return middle;
            case 1: return binsearch_rec(list, searchnum, left, middle+1);
        }
    }
    return -1;
}
