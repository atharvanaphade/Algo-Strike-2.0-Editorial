#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    //test cases
    int t;
    cin>>t;//input of test cases
    while(t--){
        int n,k;
        cin>>n>>k;//input of n and k
        int j = 0,ans = 0;
        for(int i = n;i>=0;i--){//for loop from n to 0
            if(j == k) break;//if count ==k break
            if(i%2==0){
                ans+=i;//incremented the answer by i
                j++;//incremented the count
            }
        }
        cout<<ans<<'\n';//answer printed
    }
    return 0;
}
