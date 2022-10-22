#include <bits/stdc++.h>

using namespace std;


int gamingArray(int Arr[],int n) 
{
  int A,B;
  int Decide=1;
  A=1;
  B=0; 
  int j=n;
  while(j!=0)
  {
    j=max_element(Arr,Arr+j)-Arr;
    Decide++;
  }
  if((Decide%2)!=0)
  { return A; }
  else
  { return B; }
}

int main()
{
    int g,n;
    cin>>g;
    int Ans[g];
    for(int i=0; i<g; i++)
    {
        cin>>n;
        int Arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>Arr[j];
        }
        Ans[i]=gamingArray(Arr,n); 
    }
    for(int i=0; i<g; i++)
    {
        if(Ans[i]==0)
         cout<<"BOB"<<endl;
        else
         cout<<"ANDY"<<endl;
    }
    return 0;
}