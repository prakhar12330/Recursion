# include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[],int l,int r)
{
   if(l>=r)return;
   swap(arr[l],arr[r]);
   reverseArray(arr,l+1,r-1);

}

int main()
{
  int n=5;
  int Arr[5]={2,7,4,9,1};
  int l=0,r=n-1;
  cout << "Array Before Reversing :";
  for (int i = 0; i < n; i++)
  {
      cout << Arr[i] << " ";
  }

  reverseArray(Arr,l,r);
  cout<<endl;
  cout<<"Array After Reversing :";
  for(int i=0;i<n;i++)
  {
      cout<<Arr[i]<<" ";
  }

  return 0;
}