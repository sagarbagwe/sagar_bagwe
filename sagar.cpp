#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int a;
vector<int> arr;
for(int i=0;i<n;i++){
cin>>a;
arr.push_back(a);
}
int coun=0;
int d;
cin>>d;
for(int i=0;i<n;i++)
{

if(abs(arr[i]+arr[i+1]<=d)&&arr[i]!=arr[i+1])
count++;
}
cout<<count<<end;
return 0;
}