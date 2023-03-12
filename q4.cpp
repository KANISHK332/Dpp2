//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string s1)
    {
        // Your code here
        int n= s.size();
        int m= s1.size();
        if(n!=m){
            return false;
        }
        map<char,char> mp,mp1;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=s1[i];
            }
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!= s1[i]){
                    return false;
                }
            }
        }
         for(int i=0;i<n;i++){
            if(mp1.find(s1[i])==mp1.end()){
                mp1[s1[i]]=s[i];
            }
            if(mp1.find(s1[i])!=mp1.end()){
                if(mp1[s1[i]]!= s[i]){
                    return false;
                }
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
