//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        bool isVowel(char c){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
            return false;
        }
        string modify (string s)
        {
            int i=0,j=s.size()-1;
            while(i<j){
                while(!isVowel(s[i]))i++;
                while(!isVowel(s[j]))j--;
                if(i<j)swap(s[i],s[j]);
                i++;j--;
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends