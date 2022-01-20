#include<bits/stdc++.h>

using namespace std;


void printNames(int count ,int n)
{
 
   if(count>n)return;
   cout<<"Prakhar"<<endl;
   printNames(count+1,n);

}
int main()
{
   cout<<"Enter the number of times you wish to print the name:";
   int n;
   cin>>n;
   printNames(1,n);
   
    return 0;
}