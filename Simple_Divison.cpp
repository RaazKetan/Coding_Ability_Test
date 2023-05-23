#include <iostream>
#include<vector>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,x,y;
       cin>>n>>x>>y;
       vector<int>arr(n);
       for(int i = 0; i<n; i++)
       cin>>arr[i];
       int count = 0;
       for(int i = 0; i < n; i++)
       {
           if(arr[i] <= x && arr[i]%y == 0)
           count++;
       }
       cout<<count<<endl;
   }
	return 0;
}
