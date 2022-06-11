#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
 
int x(float N)
{
    float Xn;
    if (N==0)
    {
     Xn=1.0;   
    }
    else
    {
     Xn=N*x(N-1)+1.0/N;
    cout<<Xn<<"\n";   
    }
    return Xn;
}
 
int main()
{
    printf("Enter n: ");
    int N;
    cin>>N;
    x(N);
}
