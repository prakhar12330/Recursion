#include <bits/stdc++.h>

using namespace std;

void printLinearly(int count ,int n)
{
    if(count>n)return ;
    cout<<count<<endl;
    printLinearly(count+1,n);
}

int main()
{
    cout<<"Enter the value Of N:";
    int n;
    cin>>n;
    printLinearly(1,n);


    return 0;
}

//Time Complexity-->O(n)
//Space Complexity-->O(n)