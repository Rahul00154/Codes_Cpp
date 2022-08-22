#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char H[n];
    int counth = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> H[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (H[i] == 'H' && H[i + 1] == 'H' || H[i] == 'H' && H[i - 1] == 'H')
        {
            count = 0;
            break;
        }
        count = 1;
    }
    if (count == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (H[i] == '.')
                H[i] = 'B';
            cout << H[i];
        }
    }
    else
        cout << "NO" << endl;
}
