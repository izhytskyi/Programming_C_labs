#include <iostream>
#include <string.h>
#include <clocale>

using namespace std;

struct Aeroflot
{
	string destination;
	string departure_time;
};

const int n = 6;
 
struct Train {
 char destin[21];
 unsigned int num;
 char dtime[6];
};
 
void Copy(Train &pest, Train bust)
{
 strcpy(pest.destin, bust.destin);
 strcpy(pest.dtime, bust.dtime);
 pest.num = bust.num;
}
 
int main(void)
{
    setlocale(LC_CTYPE, "ukr");
    Train a[n];
    int i = 0;
    for (i = 0; i < n; i++) 
    {
    cout << "Введіть пункт призначення: ";
    cin >> a[i].destin;
    cout << "Введіть номер поїзда: ";
    cin >> a[i].num;
    cout << "Введіть час відправлення: ";
    cin >> a[i].dtime;
    }
 
    Train buf; int k;
    for (i = 0; i < n-1; i++)
    for (k = 0; k < n-1; k++)
    if(strcmp(a[k].dtime, a[k+1].dtime) > 0) 
    {
    Copy(buf, a[k]);
    Copy(a[k], a[k+1]);
    Copy(a[k+1], buf);
    }
 
    char findtrain[21];
    cout << "Введіть пункт: ";
    cin >> findtrain;
    bool flag = false;
    for (i=0; i<n; i++)
    if (strcmp (a[i].destin, findtrain) == 0)
    {
        cout << "Поїзд #" << a[i].num << ' ' << a[i].dtime << ' ';
        flag = true;
    }
    
    if (!flag) 
    {
        cout << "Таких поїздів немає";
    }
 
    return 0;
}
