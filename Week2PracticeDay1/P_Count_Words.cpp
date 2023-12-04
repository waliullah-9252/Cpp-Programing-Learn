// #include <bits/stdc++.h>
// using namespace std;
// bool words(string word)
// {
//     for (char c : word)
//     {
//         if (isalpha(c))
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     string str;
//     getline(cin, str);
//     stringstream ss(str);
//     string word;
//     int count = 0;
//     while (ss >> word)
//     {
//         if (words(word))
//         {
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool words = false;
    int count = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (words == false)
            {
                count++;
            }
            words = true;
        }
        else
        {
            words = false;
        }
    }
    cout << count << endl;
    return 0;
}