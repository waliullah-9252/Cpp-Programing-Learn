// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x,n;
//     cin>>x>>n;
//     int sum=0;
//     for(int i=0;i<=n;i+=2){
//         sum+=pow(x,i);
//     }
//     cout<<sum;
//     return 0;
// }

#include <iostream>
#include <cmath>

int main() {
    int X, N;
    std::cin >> X;
    std::cin >> N;

    int sum = 0;
    for (int i = 0; i <= N; i += 2) {
        sum += pow(X, i);
    }

    std::cout << sum << std::endl;
    return 0;
}

