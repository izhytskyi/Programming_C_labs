#include <iostream>
using namespace std;
 
int GCD(int number1, int number2);
 
int main()
{
    char c = 'y';
    while(c == 'y')
    {
    int numb1, numb2, min, max, gcd;
 
    cout << "Enter the first number: ";
    cin >> numb1;
 
    cout << "Enter the second number: ";
    cin >> numb2;
 
    if (numb1 > numb2)
        {
            max = numb1;
            min = numb2;
        }
 
    else
        {
            min = numb1;
            max = numb2;
        }
 
        gcd = GCD(min, max);
        cout << "Greatest common divisor is: " << gcd << endl;
 
    cout << "Do you want to find GCD of another two numbers?\n";
    cout << "Press 'Y' for 'yes' or any other key to exit.\n";
    cin >> c;
 
    if (c == 'Y')
        c = 'y';
    }
    return 0;
}
 
int GCD(int min, int max)
{
    int mod;
 
    mod = max % min;
    cout << max << " % " << min << " = " << mod << endl;
 
    if (mod == 0)
        return min;
 
    else
        max = min;
        min = mod;
 
        GCD(min, max);
        return 0;
}
