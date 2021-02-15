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
    	int n,k,x,y;
    	cin>>n>>k>>x>>y;
    	
    	if(x==y)
    	cout<<n<<" "<<n<<endl;
    	
    	else if (abs(x-y)==n)
    	{
    		cout<<x<<" "<<y<<endl;
		}
    	
    	else
    	{
    		int a1,b1,a2,b2,a3,b3,a4,b4;
    		
			if( x > y )
    		{
    			//cout<<"hey\n";
    			a1 = n;
    			b1 = (n-x)+y;
    			
    			a2 = b1;
    			b2 = a1;
    			
    			a3 = 0;
    			b3 = n-a2;
    			
    			a4 = b3;
    			b4 = a3;
    			
			}
			
			else
			{
				b1 = n;
				a1 = (n-y)+x;
				
				a2 = b1;
    			b2 = a1;
    			
    			a3 = n-b2;
    			b3 = 0;
    			
    			a4 = b3;
				b4 = a3;
				
			}
			
			int rem = k % 4;
			int X,Y;
			if(rem==1)
			{
				X=a1;
				Y=b1;
			}
			else if(rem==2)
			{
				X=a2;
				Y=b2;
			}
			else if(rem==3)
			{
				X=a3;
				Y=b3;
			}
			else
			{
				X=a4;
				Y=b4;
			}
			
			cout<<X<<" "<<Y<<endl;
    		
		}
    	
    	
    	
	}
}
