#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count = 0;
    cin>>n >>k;
   
    int i;
    for(i = 0;i<n;i++){
       int t;
       cin>>t;
       if(t%k == 0)
        count++;
        
    }
   
    cout<<count<<endl;
    return 0;
}
