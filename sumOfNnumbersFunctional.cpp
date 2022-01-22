#include<bits/stdc++.h>

using namespace std;

int sumNum(int n)
{ 
   if(n==0)return 0;
   return n+sumNum(n-1);
}

int main()
{
    int n;
    cout << "Enter The Value Of N:";
    cin >> n;
    int rst=sumNum(n);
    cout<<rst;

    return 0;
}
