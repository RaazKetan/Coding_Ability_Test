#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    long long T,min,N,i,K;
    long long d[100000];
    long long r[100000];
    long long res;
    cin>>T;
    while(T--)
    {
    cin>>N>>K;
    for(i=0;i<N;i++)
    {
        cin>>d[i];
    }
    for(i=0;i<N;i++)
    {
        cin>>r[i];
    }
       min=r[0]+d[0]*K;
       for(i=1;i<N;i++)
       {
        res=r[i]+d[i]*K;
      if(res<min)
      {
            min=res;
    
        }
       }
        cout<<min<<endl;
       }
	return 0;
       }