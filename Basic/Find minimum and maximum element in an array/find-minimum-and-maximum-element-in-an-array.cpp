//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends
pair<long long, long long> getMinMax(long long arr[], int n) {
    long long min = LONG_MAX;
    long long max = LONG_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return {min,max};
}