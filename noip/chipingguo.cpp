#include <cstring>
#include <iostream>
// M 个苹果  N 个盘子
int f[1001][1001];
using namespace std;

int main()
{
    int apple, dish, a, b, t;
    cin >> t;
    for (apple = 0; apple <= 10; apple++)
        for (dish = 0; dish <= 10; dish++)
        {
            if (dish == 1 || apple == 0)
                f[apple][dish] = 1;
            else if(apple < dish)
                f[apple][dish] = f[apple][apple];
            else
                f[apple][dish] = f[apple][dish - 1] + f[apple - dish][dish];
        }
    while(t--) {
        cin >> a >> b;
        cout << f[a][b] << endl;
    }
    return 0;
}
