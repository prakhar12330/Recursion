#include<bits/stdc++.h>

using namespace std;
void sumNum(int i ,int sum)
{
  if(i<1)
  {
      cout<<sum;
      return;
  }
  sumNum(i-1,sum+i);


}

int main()
{
  int n;
  cout<<"Enter The Value Of N:";
  cin>>n;
  int sum=0;
  sumNum(n,sum);


    return 0;
}
