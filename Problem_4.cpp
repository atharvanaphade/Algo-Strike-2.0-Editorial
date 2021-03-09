#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    long long int N;
    cin>>N;
    int D; 
    cin>>D;
    if(N%D==0)
    cout<<"YES\n";
    else if(N>=(D*10))
    cout<<"YES\n";
    else
    {
          int x = N%10;
          int y = -1;
          for(int j=1;j<=9;j++)
            {
                if(x==(D*j)%10)
                {
                    y=j;
                    break;
                }
            }
            long long int z = N -y*D;
            if(z>=0&&y!=-1)
            cout<<"YES\n";
            else
            cout<<"NO\n";     
    
    }}
}