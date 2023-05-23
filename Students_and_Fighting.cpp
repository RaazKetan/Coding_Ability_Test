#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i = 0 ; i <n; i++)
	    cin>>arr[i];
	    
	    sort(arr.begin(), arr.end());
	    if(arr[n-1] == arr[n-2])
	    cout<<"fight:("<<endl;
	    else
	    cout<<"peace:)"<<endl;
	}
	return 0;
}
