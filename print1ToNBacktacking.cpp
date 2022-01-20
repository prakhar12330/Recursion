#include <bits/stdc++.h>

using namespace std;

void printLinearly(int n)
{
    if (n < 1)
        return;
    
    printLinearly(n - 1);
    cout << n << endl;
}

int main()
{
    cout << "Enter the value Of N:";
    int n;
    cin >> n;
    printLinearly(n);

    return 0;
}