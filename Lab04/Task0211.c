#include <stdio.h>
#include <math.h>

int main()
{
    int n, tmp1, tmp2, tmp, result, n1, n2 = 0;
    
    for (int j = 0; j < n - 1; j++)
        for (int i = j + 1; i < n; i++)
        {
            double tmp1 = Math.Pow((x[i]) - (x[j]), 2);
            double tmp2 = Math.Pow((y[i]) - (y[j]), 2);
            double tmp = Math.Sqrt(tmp1 + tmp2);
            if (tmp > result)
            {
                result = tmp;
                n1 = i;
                n2 = j;
            }
        }
    cout << " ";
 
    cout <<"Номер точки 1 = " + n1;
    Console.WriteLine("Номер точки 2 = " + n2);
 
    Console.WriteLine("Результат = " + result);

    return 0;
}
