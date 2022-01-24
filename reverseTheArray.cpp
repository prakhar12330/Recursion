# include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[],int i,int n)
{
   if(i>=n/2)return;
   swap(arr[i],arr[n-i-1]);
   reverseArray(arr,i+1,n);

}

int main()
{
  int n=5;
  int Arr[5]={2,7,4,9,1};
  int a=0;
  cout << "Array Before Reversing :";
  for (int i = 0; i < n; i++)
  {
      cout << Arr[i] << " ";
  }

  reverseArray(Arr,a,n);
  cout<<endl;
  cout<<"Array After Reversing :";
  for(int i=0;i<n;i++)
  {
      cout<<Arr[i]<<" ";
  }

  return 0;
}