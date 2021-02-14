#include <iostream>
using namespace std;

int f[21];

int main()
{
    int n;
    cin >> n;
    f[0] = 1;
    f[1] = 3;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] * 3 - f[i - 2] * 2;
    }
    cout << f[n] << endl;
    return 0;
}

/*
对于第N步，有两种走法，第一种是向北走，此时第N+1步还有三种走法；第二种是向东或者向西走，此时第N+1步只有两种走法。
而第一种走法有 f[N-1]-f[N-2]种走法，第二种走法有 f[N-2] 种走法。
故对于第 N+1 步有 (f[N-1]-f[N-2])*3+f[N-2]*2 种走法。
*/
