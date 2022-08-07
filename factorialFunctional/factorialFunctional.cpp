#include<bits/stdc++.h>


using namespace std;


int factNum(int n)
{
   if(n==1)
   {
       return 1;
   }
   return n*factNum(n-1);
}

int main()
{
    int n;
    cout << "Enter The Value Of N:";
    cin >> n;
    int rst = factNum(n);
    cout << rst;

    return 0;
}
