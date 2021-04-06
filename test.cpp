#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n = {1, 1, 1, 2, 2, 3};
    int slow = 0;
    for (int fast = 1; fast < n.size(); fast++)
    {
        if (n[slow] != n[fast]){
            slow++;
            n[slow] = n[fast];
            for (int i = 0; i < n.size();i++) {
                cout << n[i];
            }
            cout << endl;
        }
    }
    return 0;
}
