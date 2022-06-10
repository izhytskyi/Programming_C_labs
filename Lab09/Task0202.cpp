#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <clocale>
using namespace std;
const int lim = 25;

void getline(char* str, int lim)
{
    int c, i;
    c = 1;
    for (i = 0; (i < lim - 1) && (c != (int)'\n'); i++)
    {
        c = getchar();
        str[i] = c;
    }
    str[i] = '\0';
}
 
struct book
{
    int UDKnumber;
    char author[lim];
    char bookname[lim];
    int year;
    int amount;
    book* next;
};
book* firstbook = new book;
book* lastbook = firstbook;
bool isFirst = true;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n, i, c, j, k;
    int request;
    char* str;
    printf("Визначте асортимент бібліотеки\n");
    cin >> n;
 
    for (i = 0; i <= n - 1; i++)
    {
        if (isFirst) isFirst = false;
        else
        {
            lastbook->next = new book;
            lastbook = lastbook->next;
        }
        printf("ЗАПИС #%d\n", i + 1);
        printf("UDK: ");
        cin >> lastbook->UDKnumber;
        putchar((int)'\n');
        fflush(stdin);
        printf("Автор: ");
        str = &lastbook->author[0];
        getline(str, lim);
        putchar((int)'\n');
        printf("Назва книги: ");
        str = &lastbook->bookname[0];
        getline(str, lim);
        putchar((int)'\n');
        printf("Рік: ");
        cin >> lastbook->year;
        putchar((int)'\n');
        printf("Кількість: ");
        cin >> lastbook->amount;
        lastbook->next = NULL;
    }
    for (k = 0; k >= 0; k++)
    {
        fflush(stdin);
        printf("Вибір операції\n");
        printf("1-Видача книги 2-Здача книги 3-Запит про наявність книг 4-Вихід з програми\n");
        c = getchar();
        switch (c)
        {
        case '1':
            printf("Введіть запит UDK: ");
            cin >> request;
            j = 0;
            for (book* t = firstbook; t != NULL; t = t->next)
            {
                if (request == t->UDKnumber)
                {
                    if (t->amount != 0)
                    {
                        t->amount = t->amount - 1;
                        break;
                    }
                    else
                    {
                        printf("книга на даний момент відсутня\n");
                        break;
                    }
                }
                if (j == n - 1) printf("такої книги в бібліотеці немає\n");
                j++;
            }
            break;
        case '2':
            printf("Введіть запит UDK: ");
            cin >> request;
            j = 0;
            for (book* t = firstbook; t != NULL; t = t->next)
            {
                if (request == t->UDKnumber)
                {
                    t->amount = t->amount + 1;
                    break;
                }
                if (j == n - 1) printf("такої книги в бібліотеці немає\n");
                t = t->next;
                j++;
            }
            break;
        case '3':
            printf("UDK | AUTHOR    | NAMEBOOK    | YEAR | COUNT\n");
            for (book* t = firstbook; t != NULL; t = t->next)
            {
                printf("%d      ", t->UDKnumber);
                for (i = 0; t->author[i] != 10; i++)
                    cout << t->author[i];
                cout << "    ";
                for (i = 0; t->bookname[i] != 10; i++)
                    cout << t->bookname[i];
                cout << "    ";
                printf("%d  ", t->year);
                printf("%d\n", t->amount);
            }
            break;
        case '4':
            return -1;
        }
    }
    delete firstbook;
}
