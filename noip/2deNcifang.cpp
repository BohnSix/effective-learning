#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int times, length, s, a[10001];
int main()
{
    scanf("%d", &times);
    a[1] = 1;
    length = 1;
    for (int i = 1; i <= times; i++)
    {
        for (int j = 1; j <= length; j++)
            a[j] *= 2;
        for (int j = 1; j <= length; j++)
        {
            s = 0;
            if (a[j] >= 10)
            {
                a[j + 1] += a[j] / 10;
                a[j] = a[j] % 10;
                s = max(j + 1, s);
            }
        }
        length = max(length, s);
    }
    for (int i = length; i > 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}
