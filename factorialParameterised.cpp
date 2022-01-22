#include <bits/stdc++.h>

using namespace std;
void sumNum(int i, int fact)
{
    if (i == 1)
    {
        cout << fact;
        return;
    }
    sumNum(i - 1, fact * i);
}

int main()
{
    int n;
    cout << "Enter The Value Of N:";
    cin >> n;
    int fact=1;
    sumNum(n, fact);

    return 0;
}