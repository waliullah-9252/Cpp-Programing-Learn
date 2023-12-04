#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    for (int i = 1; i <= tst; i++)
    {
        int n;
        cin >> n;
        char s[51];
        cin >> s;
        int count[26] = {0};
        for (int i = 0; i < strlen(s); i++)
        {
            int value = s[i] - 97;
            count[value] += 2;
        }
        for (int i = 0; i < strlen(s); i++)
        {
            int value = s[i] - 97;
            if (count[value] != 0)
            {
                cout << count[value] << endl;
            }
            count[value] = 1;
        }
    }

    return 0;
}