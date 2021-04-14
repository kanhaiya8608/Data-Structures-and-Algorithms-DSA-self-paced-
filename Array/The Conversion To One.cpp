#include <bits/stdc++.h>
using namespace std;


long long minOperations(long long n)
{
    if(n==1) 
    return 0; //since 1 is already 1
    if(n==2)
    return 1; //convert 2 to 1. 1 step
    if(n==3)
    return 2; //convert 3 to 2. Then 2 to 1. 2 steps
    long long total=0; //save total steps
    if(n%2!=0) //if odd
    {
          total=1+min(minOperations(n-1),minOperations(n+1)); 
          //convert n to n-1 or n+1 then minimum of those conversions
    }
    else
    total=1+minOperations(n/2); //convert n to n/2 then count operations required for n/2 to 1
    
    return total; //returning total at the end
}

int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        long long n;
        cin>>n;
        cout<<minOperations(n)<<endl;
        
        
    }
	return 0;
}
