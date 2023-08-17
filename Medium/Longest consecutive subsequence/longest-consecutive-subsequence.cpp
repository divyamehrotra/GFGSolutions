//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N)
    {
        if(N==0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i=0;i<N;i++){
            st.insert(arr[i]);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int x = it;
                int cnt = 1;
                while(st.find(x+1)!=st.end()){
                    x = x+1;
                    cnt = cnt+1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends