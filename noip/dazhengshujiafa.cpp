#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[2002], b[2000], c[2000];
char as[2000], bs[2000];
int main()
{
    // 获取输入
    int al, bl, cl, x = 0;
    gets(as);
    gets(bs);
    // 将输入倒序
    al = strlen(as);
    bl = strlen(bs);
    for (int i = al - 1; i >= 0; i--)
        a[i] = as[i] - '0';
    for (int i = al - 1; i >= 0; i--)
        cout << a[i] << ' ';
    for (int i = bl - 1; i >= 0; i--)
        b[i] = bs[i] - '0';
    cout << al << '\n' << a[al-1] << endl;
    system("pause");
    return 0;
}

