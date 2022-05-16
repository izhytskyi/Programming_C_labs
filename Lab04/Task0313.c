#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int *nums;
    int counter = 0;
    printf("Enter n:");
    scanf("%d", &n);
    nums = (int*)malloc(n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] = \n", i);
        scanf("%d", &nums[i]);
    }
    for(int i = 1; i < n; i++)
    {
        if(nums[i] == nums[i-1]) counter++;
    }
    printf("Res = %d", counter);
    free(nums);
    return 0;
}
