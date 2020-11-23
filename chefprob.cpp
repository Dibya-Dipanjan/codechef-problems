#include <iostream>
using namespace std;

int main() {
    long long int m;
    cin>>m;
    while(m--)
    {
        long long int n,k,t=0;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>=k)
            {
                t++;
                arr[i+1]+=(arr[i]-k);
            }
            if (arr[i]<k)
            break;
        }
        if (i==n)
        t+=((arr[n-1]-k)/k);
        cout<<t+1<<endl;
    }
	return 0;
}
