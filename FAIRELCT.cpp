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
    	int n,m;
    	cin>>n>>m;
    	int sum_john = 0 , sum_jack = 0;
    	int Nrr[n],Mrr[m]; 
    	
		for(int i=0;i<n;i++)
    	{
    		cin>>Nrr[i];
		}
		
		for(int j=0;j<m;j++)
    	{
    		cin>>Mrr[j];
		}
		
		for(int i=0;i<n;i++)
    	{
    		sum_john += Nrr[i];
		}
		
		for(int j=0;j<m;j++)
    	{
    		sum_jack += Mrr[j];
		}
		
	//	cout<<"Sum of jon and jack:"<<sum_john << " "<< sum_jack<<endl;
		
		sort(Nrr,Nrr+n);
		sort(Mrr,Mrr+m,greater<int>());
		
		
		
		int cnt=0, p=0;
		
		if(sum_john > sum_jack)
		cout<<"0\n";
		
		else
		{
			while(p<n && p<m)
			{
				if(Nrr[p]>Mrr[p]) break;
				
				cnt++;
				sum_john += abs(Mrr[p]-Nrr[p]);
				sum_jack -= abs(Mrr[p]-Nrr[p]);
				//cout<<"Sum of jon and jack:"<<sum_john<< " " << sum_jack<<endl;
				if(sum_john > sum_jack) break;
				
				p++;

			}
			
			if( sum_john > sum_jack)
			{
				
				cout<<cnt<<endl;
			}
			else
			cout<<"-1\n";
			
		}	
	}
}

