#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	stack<string>A,B;
	while(q--)
	{
	   int g;
	  cin>>g;
	  if(g ==1)
	  {
	      string s;
	      cin>>s;
	      A.push(s);
	  }
	  if(g == 2)
	  {
	      int l;
	      cin>>l;
	      while(l-- && !A.empty())
	      {
	      string a = A.top();
	      A.pop();
	      B.push(a);
	      }
	  }
	  if(g == 3)
	  {
	      int l;
	      cin>>l;
	      while(l-- && !B.empty())
	      {
	          
	          string a =B.top();
	          B.pop();
	          A.push(a);
	      }
	  }
	  if(A.empty())
	  cout<<"nil"<<endl;
	  else
	  cout<<A.top()<<endl;
	}
	return 0;
}
