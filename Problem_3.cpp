#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t; // taking number of test cases input
	while(t--)
	{
		// n is length of string 
		int n,ans=0;  
		cin >> n;
		// s is the string variable
		string s;  
		// taking string input
		cin >> s;  
		// using map data structure of STL to store frequency of each character
		map<char,int> m;  
		for(int i=0;i<n;++i){
			// storing frequency here
			m[s[i]]++;   
		}
		// iterating over the map and taking out frequencies 
		for(auto itr=m.begin();itr!=m.end();++itr){ 
			// taking frequencies using itr->second  
			if(itr->second%2){   
				// incrementing count if the frequency is odd
				ans += 1;   
			}
		}
		// printing count
		cout << ans << endl;   
	}
}
