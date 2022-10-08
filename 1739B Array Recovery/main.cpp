#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
 
 
 
int main()
{
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];
        
        if(n == 1) {
            cout<<v[0]<<endl;
            continue;
        }
        
        vector<int> tmp(n);
        tmp[0] = v[0];
        bool flag = false;
        
        for(int i = 1; i < n; i++) {
            if(v[i] == 0) {tmp[i] = tmp[i-1] + v[i]; continue;}
            if(tmp[i-1] - v[i] >= 0) {
                flag = true;
                break;
            } 
            else tmp[i] = tmp[i-1] + v[i];
        }
        
        if(flag) cout<<"-1"<<endl;
        else {
            for(int i = 0 ; i < n; i++) {
                cout<<tmp[i]<<" ";
            }
            cout<<endl;
        }
        
    }
 
    return 0;

}
