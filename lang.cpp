#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int countt = 0;
        int maxv = 0;
        for(int i =0; i<n ;i++){
            if(s[i] == '*'){
                countt++;
                if(countt >= maxv)
                    maxv = countt;
            }
            else
                countt = 0;
        }
        if(maxv >= k){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
