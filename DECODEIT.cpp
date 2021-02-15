# include<bits/stdc++.h>
# define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
# define limit 1000000007
# define lli long long int 
# define li long int
# define ulli unsigned long long int 
# define endl "\n"

using namespace std;

int myAtoi(char str)
{
    // Initialize result
    int res = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corosponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    res = str - '0';
 
    return res;
}


int main()
{
    fast;
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	char str[n];
    	cin>>str;
    	const char s[] = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
		for(int i=0;i<n;i+=4)
		{
			int temp = 0;
			temp = myAtoi(str[i])*8 + myAtoi(str[i+1])*4 + myAtoi(str[i+2])*2  + myAtoi(str[i+3]) ;
			cout<<s[temp];
		}
		
		cout<<endl;
		
		
		
	}
    
    
 

}

