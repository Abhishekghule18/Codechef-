# include<bits/stdc++.h>
# define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
# define limit 1000000007
# define lli long long int 
# define li long int
# define ulli unsigned long long int 
# define endl "\n"

using namespace std;


int main()
{
    fast;
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,d;
    	cin>>n>>k>>d;
    	
    	int sum=0;
    	int temp;
    	
    	for(int i=0;i<n;i++)
    	{
    		cin>>temp;
    		sum+=temp;
		}
		
		
		int div=sum/k;
		
		if(div<=d)
		cout<<div<<endl;
		else
		cout<<d<<endl;
	}
    
    
 

}

