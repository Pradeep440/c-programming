#include <stdio.h>

int main()
{
    int array[50], position, c, n, value;
    
    printf("Enter number of elements :\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    printf("enter the position where you want to insert an new element\n");
    scanf("%d", &position);
    
    printf("enter the new element :\n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    printf("array after inserting:\n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
}
