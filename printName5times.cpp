# include<bits/stdc++.h>

using namespace std;

int cnt=0;
void printname()
{
   if(cnt==5)return;
   cout<<"prakhar"<<endl;
   cnt++;
   printname();

}
int main()
{
 
 printname();
 return 0;

}
