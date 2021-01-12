// 99999999999
// -      9999
// -----------
// 99999990000

#include <cstring>
#include <iostream>

using namespace std;
int a[2000], b[2000], c[2000];
char sa[2000], sb[2000];
int main()
{
    gets(sa);
    gets(sb);
    int la = strlen(sa), lb = strlen(sb);
    for (int i = 1; i <= la; i++)
        a[i] = sa[la - i] - '0';
    for (int i = 1; i <= lb; i++)
        b[i] = sb[lb - i] - '0';
    int index = 1, x = 0;
    while (index <= la || index <= lb)
    {
        c[index] = a[index] - x - b[index];
        if (c[index] < 0)
        {
            c[index] += 10;
            x = 1;
        }
        else
        {
            x = 0;
        }
        index++;
    }
    for (int i = index-1; i > 0;i--)
        cout << c[i];

    cout << endl;
    return 0;
}
