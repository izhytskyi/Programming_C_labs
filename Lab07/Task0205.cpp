#include <iostream>
#include <cmath>
using namespace std;

void calculation(int n);

int main()
{
  int n = 0;
  cout << "Enter n(4<n<10): ";
  cin >> n;
  while((n < 4)||(n > 10)) 
  {
    cout << "4<n<10" << "\n" << "Enter n(4<n<10): ";
    cin >> n;
  }
  calculation(n);
  return 0;
}

void calculation(int n) 
{
  long double result;
  double sum = 0;
  for (int i = 1; i <= n; i++)
  {
    double temp;
    cout << "a" << i << " = ";
    cin >> temp;
    sum = sum + pow((-1),i)*temp;
  }
  result = sum;
  cout << "Result: " << result << endl;
}
