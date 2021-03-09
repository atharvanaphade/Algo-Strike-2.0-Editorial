#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<string>
#include<iostream>
#include<queue>
#include<stack>
#include<map>
#include<vector>
#include<set>
using namespace std;
typedef long long LL;
#define mid (L+R)/2
#define lson rt*2,L,mid
#define rson rt*2+1,mid+1,R
const int maxn = 1e5 + 300;
const int INF = 0x3f3f3f3f;
typedef long long  LL;
typedef unsigned long long ULL;
int a[maxn];
int isRight[maxn], IsWrong[maxn];
int IsRightActually[maxn], Rights[maxn];
int main(){
   int n, m;
   while(scanf("%d%d",&n,&m)!=EOF){
       int nosupn = 0;
       for(int i = 1; i <= n; i++){
           scanf("%d",&a[i]);
           if(a[i] > 0){
               isRight[a[i]]++;
           }else{
               IsWrong[-a[i]]++;
               nosupn++;
           }
       }
       int saytrue = 0;
       int cn = 0;
       for(int i = 1; i <= n; i++){
// calculating the number of vampires saying the truth for the current assumed gate.
           saytrue = isRight[i] + nosupn - IsWrong[i];
           if(saytrue == m){
               Rights[cn] = i; cn++;
               IsRightActually[i] = 1;
           }
       }
       if(cn == 1){
//checking if we have more than one correct gates  or not.
 
           for(int i = 1; i <= n; i++){
               if(a[i] > 0){
                   if(IsRightActually[a[i]]){
                       puts("Live");
                   }else{
                       puts("Die");
                   }
               }else{
                   if(IsRightActually[-a[i]]){
                       puts("Die");
                   }else{
                       puts("Live");
                   }
               }
           }
       }else{
           for(int i = 1; i <= n; i++){
               if(a[i] > 0){
                   if(IsRightActually[a[i]]){
                       puts("Not Sure");
                   }else{
                       puts("Die");
                   }
               }else{
                   if(IsRightActually[-a[i]]){
                       puts("Not Sure");
                   }else{
                       puts("Live");
                   }
               }
           }
       }
   }
   return 0;
}
