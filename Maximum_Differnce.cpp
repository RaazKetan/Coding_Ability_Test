#include <iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    int row, col;
	    cin>>row>>col;
	    vector<vector<int>>mat(row,vector<int>(col));
	    vector<int>ans;
	    for(int i = 0; i < row;i++)
	    {
	        for(int j = 0; j<col; j++)
	        {
	            
	        cin>>mat[i][j];
	        }
	    }
	    for (const auto& r : mat) {
        int min_value = *min_element(r.begin(), r.end());
        int max_value = *max_element(r.begin(), r.end());
        int difference = max_value - min_value;
        ans.push_back(difference);
	    }
	    int max = *max_element(ans.begin(), ans.end());
	    cout<<max<<endl;
	    
	}
	return 0;
}
