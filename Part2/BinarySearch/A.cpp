#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int binarysearch(int x, int arr[], int n)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        int y = arr[mid];
        if (x == y)
        {
            return 1;
        }
        else if (x < y)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &brr[i]);
        int ran = binarysearch(brr[i], arr, n);
        if (ran == 1)
        {
            printf("Happy Halloween!\n");
        }
        else
        {
            printf("Tricky!\n");
        }
    }

    return 0;
}