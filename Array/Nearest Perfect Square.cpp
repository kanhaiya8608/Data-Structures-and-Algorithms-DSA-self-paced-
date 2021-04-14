#include <bits/stdc++.h>
using namespace std;


bool isPerfectSquare(long long number)
{
    long long root=sqrt(number);
    return root*root==number;
}

int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        long long n;
        cin>>n;
        
        long long smaller;
        long long greater;
        
        if(isPerfectSquare(n)==true)
        {
           smaller=sqrt(n)-1;
           greater=sqrt(n)+1;
        }
        else
        {
           smaller=floor(sqrt(n));
           greater=ceil(sqrt(n));
        }
        
        
        if(abs(smaller*smaller-n)<abs(greater*greater-n))
            cout<<smaller*smaller<<endl;
        else
            cout<<greater*greater<<endl;
        
    }
	return 0;
}
