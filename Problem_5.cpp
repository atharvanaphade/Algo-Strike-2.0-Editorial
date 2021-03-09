#include<bits/stdc++.h>
using namespace std;


    //initialized the arrays and variables
    //na contains the sum of each column of matrix A
    //nb contains the sum of each row of matrix B 

    long long ans, na[105]={0}, nb[105]={0}, k;
    long long int A[105][105], B[105][105]; 


    int main(){
        ans=0;
        int n, q;
        scanf("%d", &n);//input of order of matrices
        
        
        //input of matrix A
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld", &A[i][j]);
            }
        }
     
        
        //input of matrix B
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld", &B[i][j]);
            }
        }
     
        
        
        //intialized the variable ans = 0 
        //ans stores the sum of the elements of product matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    ans+=(A[i][k]*B[k][j]);
                }
            }
        }
        
        
        // Sum of each column of A matrix stored in na
        for(int i=0;i<n;i++){
            na[i]=0;
            for(int j=0;j<n;j++){
                na[i]+=A[j][i];
            }
        }
        
        
        //sum of each row of B matrix stored in nb
        for(int i=0;i<n;i++){
            nb[i]=0;
            for(int j=0;j<n;j++){
                nb[i]+=B[i][j];
            }
        }

        //input of q students     
        scanf("%d", &q);
     
        char f;
        int l, r;
        
        
        //input of q queries
        while(q--){
            scanf("\n%c ", &f);
            scanf("%d %d %lld", &l, &r, &k);
            
            
            //if given matrix is A
            if(f=='A'){
                
                
                //incremented the answer by the difference of the 
                //new and original element into the sum of particular row 
                ans+=(k-A[l][r])*nb[r];
                
                //subtracted the original element from sum of columns of A
                na[r]-=A[l][r];
                
                //added k instead of A[l][r]
                na[r]+=k;
                //replaced the given element
                A[l][r]=k;
            }
            
            
            //if given matrix is B
            else{
                
                //did the same for B as that of A just for the columns in A
                ans+=(k-B[l][r])*na[l];
                nb[l]-=B[l][r];
                nb[l]+=k;
                B[l][r]=k;
            }
            
            //at the end printed the answer
            printf("%lld\n", ans);
        }
     
        return 0;
    }
