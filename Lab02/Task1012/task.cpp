#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (k = 1; k <= n; k++)
    {
        sum = sum + pow(k, k);
    }
    std::cout << sum << "\n";
}
