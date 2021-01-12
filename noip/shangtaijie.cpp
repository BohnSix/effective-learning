#include <cstdio>
#include <iostream>
using namespace std;

int a, f[105] = {0, 1, 2, 4};
int main()
{
    for (int i = 4; i <= 100; i++)
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    while (1)
    {
        cin >> a;
        if (a == 0)
            break;
        cout << f[a] << endl;
    }
    return 0;
}
