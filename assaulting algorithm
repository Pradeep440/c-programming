#include <stdio.h>
main()
{
    	int n,a[20],i,j;
  printf("Enter number of elements of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element of the array:");
		scanf("%d",&a[i]);
	}
    int min_index;
    for(i = 0; i < n - 1; i++) {
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(a[min_index] > a[j]) {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)  {
        printf(" %d", a[i]);
    }
}
