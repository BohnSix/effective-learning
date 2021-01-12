#include <cmath>
#include <iostream>
using namespace std;

int a[1000001] = {0, 1, 1}, tot, n;
int main()
{
    for (int i = 3; i < 1000000; i++)
    {
        a[i] = (a[i - 1] + a[i - 2]) % 1000;
    }
    cin >> tot;
    while (tot--)
    {
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}
