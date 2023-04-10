
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }

    max = *ptr;
    min = *ptr;
    for(i = 1; i < n; ++i)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
        if(*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    printf("The largest element is %d\n", max);
    printf("The smallest element is %d\n", min);
    free(ptr);

    return 0;
}
