#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[2002], b[2000], c[2000];
char as[2000], bs[2000];
int main()
{
    // 获取输入
    int al, bl;
    gets(as);
    gets(bs);

    // 将输入倒序
    al = strlen(as);
    bl = strlen(bs);
    for (int i = 1; i <= al; i++)
        a[i] = as[al - i] - '0';
    for (int i = 1; i <= bl; i++)
        b[i] = bs[bl - i] - '0';

    // 现在 a 和 b 里面装的是 as 和 bs 的倒序数组
    int index = 1, x = 0;
    while (index <= al || index <= bl)
    {
        c[index] = a[index] + b[index] + x;
        c[index] = c[index] % 10;
        x = c[index] / 10;
        index++;
    }
    c[index] = x;
    // 输出
    for (int j = index-1; j > 0;j--)
        cout << c[j];
    cout << endl;
    return 0;
}
