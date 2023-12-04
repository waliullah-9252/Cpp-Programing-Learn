#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int i = 0, j = n - 1;
    int flag=1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
        if(a[i]!=a[j]){
            flag=0;
        }
    }
    if (flag==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}